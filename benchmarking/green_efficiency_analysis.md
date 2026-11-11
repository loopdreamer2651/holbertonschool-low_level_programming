# Green Efficiency Analysis

## Measurement Methodology
The task 2 of this projects is run 3 times with the following measurement:

1. The time measurement for each program is using predefined "clock_t" variable and clock() function in <time.h>. A 'clock_t' value is captured before and after each phase of interest, and elapse CPU time is computed as the different between each clock_t value.
2. CPU time is converted to wall time by dividing CLOCK_PER_SEC.
3. Every clock_t value is cast to double so that subtraction result is not truncated by integer division, and the double is passed to a %.6f format specifier. 
4. Note that clock() measure CPU time consumed by process, not wall-clock time, and its granularity is platform dependant (CLOCK_PER_SEC is 1,000,000 on my system). For workload that is very short (under 1 second), this granularity can dominate the measurement, so the absolute values should be read as indicative rather than exact. 

## Observed Performance Differences
Across 3 runs, three phases shows different costs, even though they iterate over the same 50,000-element array. 50,000 x 4 byte per float is 200KB. 

| Phase | Run 1 (s) | Run 2 (s) | Run 3 (s) | Average (s) | Relative Cost | Dominant Operation |
| :--- | :--- | :--- | :--- | :--- | :--- | :--- |
| **TOTAL** | **0.000776** | **0.000769** | **0.000754** | **0.000766** | --- | --- |
| **BUILD_DATA** | 0.000295 | 0.000303 | 0.000303 | 0.000300 | Low - Moderate | One LCG step (multiply + add) plus a modulo per element |
| **PROCESS** | 0.000345 | 0.000330 | 0.000315 | 0.000330 | Highest | Multiply, signed division, signed modulo, comparison, conditional negation per element |
| **REDUCE** | 0.000136 | 0.000136 | 0.000136 | 0.000136 | Low | One multiply and one add per element (rolling hash) |

 
The key observation is that PROCESS is consistently the most expensive phase, despite touching the same amount of memory as the others. The reason is instruction cost. Integer division and modulo are the slower scalar operation compare to one cycle of multiply or add), and PROCESS perform both division and modulo for every element. 
The BUILD_DATA phase also has modulo but only one, and REDUCE does not, hence shorter run time. 

Memory behaviour also contributes. At 200 KB, the dataset approaches critical cache boundaries, where the structures risk frequent L1 cache (36 - 94 KB) spillout to L2 cache (512 KB to 1 MB) per core. 
Moving data across a chip requires physically charging wires. The further data has to travel, the more electrical energy it consumes. At scale, this could become the dominant energy cost.

## Relation Between Runtime and Energy Consumption
Energy comsumption is the integral of power over time: Energy = Average Power x Execution Time

For a CPU program like this one, execution time is therefore the dominant contributor on energy. If runtime is halved, the energy required would roughly be halved, provided the processor operates in the same power state. This makes runtime a proxy for energy comparison.

However, the relationship is not perfectly linear because power is not constant and idle and memory power have a floor:
1. Power is not constant: When a CPU encounters a heavy load, it rapidly shifts both its frequency and voltage, causing power to spike or drop non-linearly. Because voltage is squared in the CPU power equation, even a tiny increase in voltage to stabilize a higher clock speed causes an exponential jump in power draw.
2. Power floor: A fraction of the energy is consumed by memory traffic, cache misses, and background activity regardless of the arithmetic being performed.

## Limitations of the Experiment
1. clock() measures CPU time, not wall time or energy. It also ignores time the process spends waiting (I/O, scheduling) and says nothing about actual power draw. No energy counter(powermetrics, or an external meter) is used, so energy figures are inferred, not measured.
2. No isolation of memory effects. The array is 200 KB, so cache residency varies with machine and other load (such as scheduling noise). The experiment does not separate arithmetic cost from memory cost, nor does it test scaling across dataset sizes.
3. Hardware and platform specificity. Absolute times and the relative ranking of phases depend on the CPU microarchitecture, CLOCKS_PER_SEC, and OS. Conclusions should not be generalised to other machines.
4. For sub-second phases, timer resolution can introduce large relative error, and very fast phases may be reported as zero.
 
## Practical Engineering Takeaway
The takeaway for green software engineering is: 
1. Measure per phase, not just the total runtime to get a clear picture.
2. Target expensive loops and operations.
3. Treat runtime as a proxy for energy but validate with real instrumentation when decisions matter. 
4. At 200 KB the dataset sits near cache boundaries; at scale, memory behaviour can overtake arithmetic as the dominant energy cost. To fix this, we need to design the code to be cache-friendly and branch-friendly.

The biggest takeaway from this project for me is a simple but powerful rule: runtime is a good screening tool for locating expensive code, but conclusions about energy should be drawn carefully  and confirmed with power instrumentation and repeated, controlled measurements.
