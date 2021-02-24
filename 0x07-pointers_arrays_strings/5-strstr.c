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
	char *p = haystack;

	for (i = 0, j = 0; haystack[i] != '\0'; i++)
	{
		if (haystack[i] != needle[j])
		{
			if (j > 0)
				p = p + j + 1;
			else
				p++;
			j = 0;
		}
		else
		{
			j++;
		}

		if (needle[j] == '\0')
		{
			paso = 1;
			break;
		}
	}

	if (!paso)
		return (0);

	return (p);
}
