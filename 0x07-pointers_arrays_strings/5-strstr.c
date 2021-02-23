#include "holberton.h"
#include <stdio.h>

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
 *_strstr - imp
 *@haystack: array
 *@needle: char
 *
 *Return: char puntero
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j, l = _strlen(needle);
	char *p = haystack;

	for (i = 0, j = 0; haystack[i] != '\0'; i++)
	{
		if (needle[j] == '\0')
			break;

		if (haystack[i] != needle[j])
		{
			j = 0;
			p++;
		}
		else
			j++;
	}

	if (j == 0 || j < l)
		return (0);

	return (p);
}
