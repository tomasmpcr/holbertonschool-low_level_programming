#include "holberton.h"

/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	int i, j, a;
	char car[] = {' ', '\t', 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	a = sizeof(car) / sizeof(char);

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			for (j = 0; j < a; j++)
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
