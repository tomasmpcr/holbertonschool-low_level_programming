#include "holberton.h"

/**
 *_memcpy - imp
 *@dest: array
 *@src: asd
 *@n: int
 *
 *Return: char puntero
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
