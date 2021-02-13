#include "holberton.h"

/**
 * _puts - loco..
 *@str: number
 *
 * Return: void.
 */
void _puts(char *str)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
