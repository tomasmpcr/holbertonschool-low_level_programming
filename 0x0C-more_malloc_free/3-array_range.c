#include "holberton.h"
#include <stdlib.h>
#include <stdio.h>

/**
 *array_range - print array of integer
 *@min: int
 *@max: int
 *
 *Return: int array
 */
int *array_range(int min, int max)
{
	int i, cal;
	int *p;

	if (min > max)
		return (NULL);

	cal = (max - min) + 1;

	p = malloc(cal * sizeof(int));

	if (p == NULL)
		return (NULL);

	for (i = 0; i < cal; i++, min++)
		p[i] = min;

	return (p);
}
