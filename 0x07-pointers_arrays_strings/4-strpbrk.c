#include "holberton.h"

/**
 *_strpbrk - imp
 *@s: array
 *@accept: char
 *
 *Return: char puntero
 */

char *_strpbrk(char *s, char *accept)
{
	int j, paso = 0;

	for (; s[0] != '\0'; s++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[0] == accept[j])
			{
				paso = 1;
				break;
			}
		}
		if (paso)
		{
			break;
		}
	}


	if (!paso)
	{
		return (0);
	}

	return (s);
}
