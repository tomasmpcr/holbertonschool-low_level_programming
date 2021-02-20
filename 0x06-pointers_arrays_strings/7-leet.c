#include "holberton.h"

/**
 *leet - 7 machete
 *@c: *
 *
 *Return: *
 */
char *leet(char *c)
{
	unsigned int i, j;
	char comp[] = {'a', 'e', 'o', 't', 'l'};
	char sus[] = {'4', '3', '0', '7', '1'};

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; j < sizeof(comp); j++)
		{
			if (c[i] == comp[j] || c[i] == (comp[j] - 32))
				c[i] = sus[j];
		}
	}

	return (c);
}
