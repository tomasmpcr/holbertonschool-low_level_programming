#include "holberton.h"
#include <stdio.h>

/**
 *_strstr - imp
 *@haystack: array
 *@needle: char
 *
 *Return: char puntero
 */

char *_strstr(char *haystack, char *needle)
{
	int i, j;
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

	if (j == 0)
		return (0);

	return (p);
}
