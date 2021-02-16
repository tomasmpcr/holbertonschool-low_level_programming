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

	if (i % 2 == 0)
		i++;

	for (; j <= i; j++)
		_putchar(str[j]);

	_putchar('\n');
}
