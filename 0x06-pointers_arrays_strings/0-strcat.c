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
 * _strcat - DxC3=D
 *@dest: ni dea
 *@src: img src? xddd
 *
 *Return: char
 */
char *_strcat(char *dest, char *src)
{
	int i, destC = _strlen(dest), srcC = _strlen(src);

	for (i = 0; i <= srcC; i++)
	{
		dest[destC + i] = src[i];
	}

	return (dest);
}
