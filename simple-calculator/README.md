# Simple calculator in C

A terminal-based calculator in C. It has a text menu system, numeric input validation, range enforcement, and basic arithmetic execution.

------------------------

## Compilations

```bash
gcc -Wall -Werror -Wextra -pedantic -std=gnu89 calculator.c -o calculator
```

### Flag Breakdown:
* `-Wall -Wextra`: Enables almost all compiler warning messages regarding questionable coding.
* `-Werror`: Treats all warnings as errors, halting compilation if a minor issue is detected.
* `-pedantic`: Strictly enforces compliance with the specified ISO C standard, rejecting any non-standard GNU extensions.
* `-std=gnu89`: Targets the C89/C90 standard with GNU extensions allowed (though restricted by `-pedantic`), requiring legacy C-style variable declarations (all variables must be declared at the top of a block/scope).
* `calculator.c`: The source file containing the calculator implementation.
* `-o calculator`: Names the compiled executable binary `calculator`.

------------------------

## Run Instructions

Once compiled without errors, execute directly from your terminal:

### On Linux :
```bash
./calculator
```
------------------------

## Supported Operations

The application launches an interactive menu mapping numeric selections to specific operations:

| Selection | Operation | Description |
| :---: | :--- | :--- |
| **`1`** | **Add** | Calculates the sum of two numbers. |
| **`2`** | **Subtract** | Calculates the difference between two numbers. |
| **`3`** | **Multiply** | Calculates the product of two numbers. |
| **`4`** | **Divide** | Calculates the quotient of two numbers. |
| **`0`** | **Quit** | Exits the application. |


## Numeric Behavior

* **Menu Navigation:** The main choice selection relies strictly on **integers** (`int`). If non-numeric characters (like letters) or out-of-range choices are typed, the function rejects the input, clear the stream buffer, and prompts the user again.
* **Math Execution:** Mathematical handle **floating-point / decimal arithmetic** (using `float` or `double` precision) for division opertation instead of truncating to an integer.

## Known Limitation

