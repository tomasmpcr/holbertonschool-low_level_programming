#include "holberton.h"

/**
 *flip_bits - set bit 0 in the index
 *@n: the number
 *@m: indice
 *
 *Return: int
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int ret = 0;
	unsigned long int num, ram;

	num = n ^ m;

	for (; 1 == 1;)
	{
		ram = num & 1;
		if (ram == 1)
			ret++;

		if (num == 0)
			break;

		num = num >> 1;
	}

	return (ret);
}
