#include "holberton.h"

/**
 *get_bit - print the bit of the index conversion
 *@n: the number
 *@index: indice
 *
 *Return: int
*/
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned int len;

	len = sizeof(n) * 8;

	if (index > len)
		return (-1);

	n = n >> index;
	return (n & 1);
}
