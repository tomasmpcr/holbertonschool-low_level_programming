#include "holberton.h"
#include "2-strlen.c"

/**
 * puts_half - loco..
 *@str: char
 *
 * Return: void.
 */
void puts_half(char *str)
{
	int j = 0, i = _strlen(str);

	j = i / 2;

	if (i % 2)
		i++;

	while (j < i)
	{
		_putchar(str[j]);
		j++;
	}

	_putchar('\n');
}
