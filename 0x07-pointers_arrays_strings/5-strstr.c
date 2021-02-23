#include "holberton.h"

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
	char *p = &haystack[0];

	for (i = 0, j = 0; haystack[i] != '\0'; i++, j++)
	{
		if (haystack[i] != needle[j])
		{
			p++;
			j = 0;
		}
		else if (needle[j] == '\0')
			break;

	}

	if (*p == '\0')
		return (0);

	return (p);
}
