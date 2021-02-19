#include "holberton.h"

/**
 * _strlen - loco..
 *@s: number
 *
 * Return: void.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

/**
 *_strncat - NSA
 *@dest: *
 *@src: *
 *@n: int
 *
 *Return: *
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, destC = _strlen(dest);

	for (i = 0; i < n && src[i] != '\0'; i++)
	{
		dest[destC + i] = src[i];
	}

	return (dest);
}
