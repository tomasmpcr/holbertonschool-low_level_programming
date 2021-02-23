#include "holberton.h"
#include <stdio.h>

/**
 *print_diagsums - print sum the diagonal
 *@a: array
 *@size: int
 *
 *return: void
 */
void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0, cuen = 0;

	for (i = 0; i < size; i++)
	{
		cuen = i + (i * size);
		sum1 = sum1 + *(a + cuen);
		cuen = ((size - 1) - i) + (i * size);
		sum2 = sum2 + *(a + cuen);
	}


	printf("%i, %i\n", sum1, sum2);
}
