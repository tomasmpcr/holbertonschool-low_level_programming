#include "holberton.h"

/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	int i, j, l, a;
	char car[] = {' ', '\t', 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	l = sizeof(car) / sizeof(char);

	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			a = c[i - 1];

			for (j = 0; j < l; j++)
			{
				if (a == car[j])
				{
					c[i] -= 32;
				}
			}
		}
	}

	return (c);
}
