#include "holberton.h"

/**
 *get_endianness - cosa
 *
 *Return: int
 */
int get_endianness(void)
{
	unsigned int x = 1;
	return ((int) (((char *)&x)[0]));
}
