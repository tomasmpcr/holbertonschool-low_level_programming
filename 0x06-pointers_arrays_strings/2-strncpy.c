#include "holberton.h"
#include "_strlen.c"

/**
 *_strncpy - NSA
 *@dest: *
 *@src: *
 *@n: int
 *
 *Return: *
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, srcC = _strlen(src);

	for (i = 0; i < n; i++)
	{
		if (i < srcC)
			dest[i] = src[i];
		else
		{
			dest[i++] = '\0';
		}
	}

	return (dest);
}
