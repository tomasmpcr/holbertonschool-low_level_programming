#include "holberton.h"

/**
 *rot13 - 8 pinocho
 *@c: *
 *
 *Return: *
 */
char *rot13(char *c)
{
	unsigned int i, j;
	char comp[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char sus[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; c[i] != '\0'; i++)
	{
		for (j = 0; comp[j] != '\0'; j++)
		{
			if (c[i] == comp[j])
				c[i] = sus[j];
		}
	}

	return (c);
}
