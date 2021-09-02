#include <stdio.h>
#include <stdlib.h>
#include "search_algos.h"

/**
 *print_array - ASD ASDASDADASD
 *@array: ASD
 *@size: ASDASD
 *@value: ASD DF
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
}

/**
 *binary_rec - ASD ASDASDADASD
 *@array: ASD
 *@size: ASDASD
 *@value: ASD DF
 *----------------------------------------------------
 *Return: INT
 */
int binary_rec(int *array, size_t i_i, size_t i_f, int value)
{
	size_t mid;

        if (array == NULL || (i_f - i_i) <= 0)
                return (-1);

        mid = (i_f - i_i) / 2;

	print_array(array, ii_i, i_f);
        if (array[mid] == value)
                return (mid);
        else if (array[mid] > value)
                return (binary_rec(array, i_i, i_f - mid, value));
        else
                return (binary_rec(array, i_i + mid, i_f, value));

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
	binary_rec(array, i_i, i_f, value);
}

