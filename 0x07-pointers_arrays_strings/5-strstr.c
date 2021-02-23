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
	int i, j, paso = 0;
	char *p = &haystack[0];

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] == '\0')
				break;

			if (haystack[i + j] == needle[j])
				paso = 1;
			else
				paso = 0;
		}
		if (!paso)
			p++;
		else
			break;
	}

	if (!paso)
	{
		return (0);
	}

	return (p);
}
