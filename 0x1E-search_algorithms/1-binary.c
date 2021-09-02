#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *print_array - ASD ASDASDADASD
 *@array: ASD
 *@i_i: ASDASD
 *@i_f: ASD DF
 *----------------------------------------------------
 *Return: INT
 */
void print_array(int *array, size_t i_i, size_t i_f)
{
	printf("Searching in array: ");
	for (; i_i != i_f; i_i++)
	{
		printf("%i", (int) array[i_i]);
		if (i_i + 1 != i_f)
			printf(", ");
	}
	printf("\n");
}

/**
 *binary_rec - ASD ASDASDADASD
 *@array: ASD
 *@i_i: ASDASD
 *@i_f: ASD ASD
 *@value: ASD DF
 *----------------------------------------------------
 *Return: INT
 */
int binary_rec(int *array, size_t i_i, size_t i_f, int value)
{
	size_t mid;

	if (array == NULL || i_i > i_f)
		return (-1);

	print_array(array, i_i, i_f + 1);

	mid = i_i + ((i_f - i_i) / 2);

	if (array[mid] == value)
		return (mid);
	else if (value < array[mid])
		return (binary_rec(array, i_i, mid - 1, value));
	else
		return (binary_rec(array, mid + 1, i_f, value));

	return (-1);
}

/**
 *binary_search - ASD ASDASDADASD
 *@array: ASD
 *@size: ASDASD
 *@value: ASD DF
 *----------------------------------------------------
 *Return: INT
 */
int binary_search(int *array, size_t size, int value)
{
	return (binary_rec(array, 0, size - 1, value));
}
