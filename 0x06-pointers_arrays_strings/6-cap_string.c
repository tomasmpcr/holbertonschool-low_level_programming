#include "holberton.h"

/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	int i, j, l;
	char car[] = {' ', '\t', 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	l = sizeof(car) / sizeof(char);

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < l; j++)
		{
			if (c[i] == car[j] && c[i + 1] >= 'a' && c[i + 1] <= 'z')
			{
				c[i + 1] -= 32;
				break;
			}
		}
	}

	return (c);
}
