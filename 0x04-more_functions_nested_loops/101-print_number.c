#include "holberton.h"


/**
 * print_number2 - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number2(int n)
{
	if (n != 0)
	{
		print_number2(n / 10);
		_putchar((n % 10) + '0');
	}
}


/**
 * print_number - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n == 0)
		_putchar('0');
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	print_number2(n);
}
