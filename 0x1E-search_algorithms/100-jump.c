#include "search_algos.h"
#include <math.h>

/**
 * test1 - ASDASDASD
 * @primero: ASDASD
 * @segundo: ASDASD
 * Return: LA
 */
size_t test1(size_t primero, size_t segundo)
{
	if (segundo < primero)
		return (segundo);
	return (primero);
}

/**
 * jump_search - ASFDFFDDFDF
 * @array: ASDFASFAF
 * @size: ADSFAS
 * @value: ASFASFDA
 * Return: -1
 */
int jump_search(int *array, size_t size, int value)
{
	size_t i, i2, salto;
	int pos;

	if (array)
	{
		salto = sqrt(size);
		i = 0;
		i2 = salto;
		pos = array[i];
		printf("Value checked array[%lu] = [%d]\n", i, pos);
		while (i2 < size && pos < value)
		{
			if (array[i2] >= value)
				break;

			i = i + salto;
			i2 = i2 + salto;
			pos = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, pos);
		}

		if (i >= size || pos > value)
			return (-1);
		printf("Value found between indexes [%lu] and [%lu]\n", i, i2);
		while (i <= test1(size - 1, i2) && pos <= value)
		{
			pos = array[i];
			printf("Value checked array[%lu] = [%d]\n", i, pos);
			if (pos == value)
				return (i);
			i++;
		}
	}
	return (-1);
}
