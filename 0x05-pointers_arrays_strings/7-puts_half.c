#include "holberton.h"

/**
 * puts_half - loco..
 *@str: char
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int i, j = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}


	j = i / 2;

	if (i % 2 == 0)
		i++;

	for (; j <= i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
