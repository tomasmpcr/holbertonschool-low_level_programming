#include "search_algos.h"

/**
 * binary_search_2 - SJIDSJIFSIDJFSIDJFSDFIJGFJIJSDFI
 * @array: SDFIJSDFSD
 * @size: FJISGJFSIJSF
 * @pos: SDIFJSDFIJSDFIJDSF
 * @value: GJHIGJHIDJDFG
 * Return: FJSGIJFGISDFJISDFJSDIJFSDIJF
 */
int binary_search_2(int *array, size_t size, size_t pio, int val)
{
	size_t h, m, l, i = 0;

	l = pio;
	h = size - 1;
	m = (l + h) / 2;
	while (l <= h)
	{
		printf("Searching in array: ");
		for (i = l; i < h; i++)
			printf("%d, ", array[i]);
		printf("%d\n", array[h]);
		if (array[m] < val)
			l = m + 1;
		else if (array[m] > val)
			h = m - 1;
		else
			return (m);
		m = (l + h) / 2;
	}
	return (-1);
}

/**
 * exponential_search - JSDIJSDFIJSIFJDSF
 * @array: IDFSFJSIDFJSDFJSD
 * @size: SDIKFJSFIJSDFIJSDFJSDFISD
 * @value: JSDFIDSJFSDJFISDJFSDFFDK
 * Return: IJSDIFSJDFODSFSDFSD
 */
int exponential_search(int *array, size_t size, int value)
{
	size_t i = 1;

	if (!array)
		return (-1);
	if (array[0] == value)
		return (0);
	while (i < size && array[i] <= value)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		i = i * 2;
	}
	if (size > i)
		size = i + 1;
	i = i / 2;
	printf("Value found between indexes [%lu] and [%lu]\n", i, size - 1);
	return (binary_search_2(array, size, i, value));
}
