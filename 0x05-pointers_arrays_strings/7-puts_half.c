#include "holberton.h"

/**
 * puts_half - loco..
 *@str: char
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int j = 0, i = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
	}

	j = i / 2;
	if (i % 2)
		j++;
	while (j < i)
	{
		_putchar(*(str + j));
		j++;
	}
	_putchar('\n');
}
