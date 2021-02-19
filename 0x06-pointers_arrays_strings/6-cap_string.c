#include "holberton.h"

/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	int i, j;
	char car[] = {' ', '\t', 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 0; j < 12; j++)
			{
				if (c[i - 1] == car[j])
				{
					c[i] = c[i] - 32;
				}
			}
		}
	}

	return (c);
}
