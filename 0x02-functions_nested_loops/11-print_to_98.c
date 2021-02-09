#include "holberton.h"
#include <stdio.h>

/**
 * print_int - return void
 *@value: number to print
 *
 * Return: Always 0 (Success)
 */
void print_int(int value)
{
	if (value != 0)
	{
		print_int(value / 10);
		_putchar((value % 10) + '0');
	}
}


/**
 * print_to_98 - return print_to_98
 *@n1: n1
 *
 * Return: Always 0 (Success)
 */
void print_to_98(int n1)
{
	int sum, des;

	if (n1 > 98)
	{
		sum = -1;
		des = 97;
	}
	else
	{
		sum = 1;
		des = 99;
	}
	for (; n1 != des;)
	{
		if (n1 == 0)
		{
			_putchar('0');
		}
		else
		{
			if (n1 < 0)
			{
				_putchar('-');
				print_int(-n1);
			}
			else
			{
				print_int(n1);
			}
		}
		if (n1 != 98)
		{
			_putchar(',');
			_putchar(' ');
		}
		n1 = n1 + sum;
	}
	_putchar('\n');
}
