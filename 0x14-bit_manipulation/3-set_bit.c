#include "holberton.h"

/**
 *set_bit - set bin opuesto
 *@n: the number
 *@index: indice
 *
 *Return: int
*/
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int len, fil = 1;

	len = sizeof((*n)) * 8;

	if (index > len)
		return (-1);

	fil = fil << index;

	*n = *n ^ fil;

	return (1);
}
