#include "search_algos.h"

/**
 * jump_search - ASDAFSSGSFSG
 * @array: ARRAY
 * @size: LE
 * @value: CALUE
 * Return: -1
 */

int jump_search(int *array, size_t size, int value)
{
	size_t asd = sqrt(size), pos = 0;

	if (!array)
		return (-1);

	printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
	if (array[0] > value)
		return (-1);
	while (pos + asd < size && value > array[pos + asd])
	{
		printf("Value checked array[%lu] = [%d]\n", pos + asd, array[pos + asd]);
		pos += asd;
	}
	printf("Value found between indexes [%lu] and [%lu]\n", pos, pos + asd);
	while (size > pos)
	{
		printf("Value checked array[%lu] = [%d]\n", pos, array[pos]);
		if (array[pos] == value)
			return (pos);
		pos++;
	}
	return (-1);
}
