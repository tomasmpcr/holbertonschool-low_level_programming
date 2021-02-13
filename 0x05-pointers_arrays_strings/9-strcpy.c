#include "holberton.h"

/**
 * _strcpy - loco..
 *@dest: char
 *@src: char
 *
 * Return: void.
 */
char *_strcpy(char *dest, char *src)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
