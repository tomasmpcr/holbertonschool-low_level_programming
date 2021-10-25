#include "search_algos.h"

/**
 * interpolation_search - ASDASASDASD
 * @array: AFIJAIFJAD
 * @size: LOFSDGJKODFO
 * @value: PAIEFROJKEFGOM
 * Return: JIGODKAFOAKFJNMANFJM
 */

int interpolation_search(int *array, size_t size, int value)
{
	size_t l = 0, h = size - 1, p;

	if (!array)
		return (-1);
	while (l <= h)
	{
		if (array[l] == array[h] && array[l] == value)
		{
		    return (l);
		}
        else if (array[l] == array[h])
		{
        		return (-1);
		}
		p = l +
(((double)(h - l) / (array[h] - array[l])) * (value - array[l]));
		if (size < p)
		{
			printf("Value checked array[%lu] is out of range\n", p);
			break;
		}
		else
			printf("Value checked array[%lu] = [%d]\n", p, array[p]);
		if (value == array[p])
		{
			return (p);
		}
		else if (value < array[p])
			h = p - 1;
		else
			l = p + 1;
	}
	return (-1);
}