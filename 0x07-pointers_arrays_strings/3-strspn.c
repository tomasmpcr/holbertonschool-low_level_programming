#include "holberton.h"

/**
 *_strspn - imp
 *@s: array
 *@accept: char
 *
 *Return: char puntero
 */

unsigned int _strspn(char *s, char *accept)
{
	int i, j, paso = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				paso = 1;
				break;
			}
		}
		if (!paso)
		{
			break;
		}

		paso = 0;
	}

	return (i);
}
