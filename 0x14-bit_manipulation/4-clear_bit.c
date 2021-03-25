#include "holberton.h"

/**
 *clear_bit - set bit 0 in the index
 *@n: the number
 *@index: indice
 *
 *Return: int
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int len, fil = 1;

	len = sizeof((*n)) * 8;

	if (index > len)
		return (-1);

	fil = ~(fil << index);

	*n = *n & fil;

	return (1);
}
