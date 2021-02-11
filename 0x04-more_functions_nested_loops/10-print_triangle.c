#include "holberton.h"

/**
 * print_triangle - loco..
 *@size: number
 *
 * Return: void.
 */
void print_triangle(int size)
{
	int i, j, cal;

	cal = size;
	if (size > 0)
	{
		for (i = 0; i < size; i++)
		{
			cal = cal - 1;
			for (j = 0; j < size; j++)
			{
				if (j < cal)
					_putchar(' ');
				else
					_putchar('#');
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
