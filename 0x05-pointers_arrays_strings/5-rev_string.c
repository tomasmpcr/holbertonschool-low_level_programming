#include "holberton.h"
#include <stdio.h>

/**
 * rev_string - loco..
 *@s: number
 *
 * Return: void.
 */
void rev_string(char *s)
{
	int i, j, g;

	for (i = 0; s[i] != '\0';i++)
	{
	}

	i = i - 1;
	for (j = 0; j <= i; j++, i--)
	{
		g = s[j];
		s[j] = s[i];
		s[i] = g;
	}
}
