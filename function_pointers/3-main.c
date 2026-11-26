#include "3-calc.h"
#include <stdio.h>

int main(int argc, char **argv)
{
	int (*op)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		return (98);
	}
	op = get_op_func(argv[2]);
	if (op == NULL || argv[2][1] != '\0')
	{
		printf("Error\n");
		return (99);
	}
	printf("%d\n", op(atoi(argv[1]), atoi(argv[3])));
	return (0);
}
