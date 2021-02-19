#include "holberton.h"
#include "_strlen.c"

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
