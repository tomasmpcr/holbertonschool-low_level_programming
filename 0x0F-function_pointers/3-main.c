#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *main - the function start
 *@ac: len in the array
 *@av: the array of the parametrs
 *
 *Return: int
 */
int main(int ac, char *av[])
{
	int num1, num2;
	char *op;

	if (ac != 4)
	{
		printf("Error\n");
		exit(98);
	}
	op = av[2];
	num1 = atoi(av[1]);
	num2 = atoi(av[3]);

	if ((op[0] == '/' || op[0] == '%') && num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}

	printf("%d\n", get_op_func(op)(num1, num2));
	return (0);
}
