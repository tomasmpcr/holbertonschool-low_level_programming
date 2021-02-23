#include "holberton.h"

/**
 *_memset - imp
 *@s: array
 *@b: asd
 *@n: int
 *
 *Return: char puntero
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; s[i] != '\0' || i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}
