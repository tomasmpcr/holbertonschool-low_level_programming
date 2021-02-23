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
	int i, j, paso = 0;

	for (i = 0; s[0] != '\0'; i++, s++)
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

		paso = 0;
	}

	return (s);
}
