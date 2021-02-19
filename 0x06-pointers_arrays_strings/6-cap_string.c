#include "holberton.h"

/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	unsigned int i, j;
	char car[] = {' ', '\t', 10, 44, 59, 46, '!', '?', '"', '(', ')', '{', '}'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(car); j++)
		{
			if (c[i] == car[j] && c[i + 1] >= 97 && c[i + 1] <= 122)
			{
				c[i + 1] -= 32;
				break;
			}
		}
	}

	return (c);
}
