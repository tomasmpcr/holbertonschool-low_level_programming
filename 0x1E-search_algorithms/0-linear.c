#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *linear_search - asd asd
 *@array: ASD
 *@size: ASDASD
 *@value: ASD DF
 *----------------------------------------------------
 *Return: INT
 */
int linear_search(int *array, size_t size, int value)
{
	size_t i = 0;

	if (array == NULL)
		return (-1);

	for (i = 0; i != size; i++)
	{
		printf("Value checked array[%i] = [%i]\n", (int) i, array[i]);
		if (array[i] == value)
		{
			return (i);
		}
	}

	return (-1);
}

