#include "holberton.h"

char p = 0;

/**
 * print_number - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number(int n)
{
	char pru = 0;

	if (p == 0)
	{
		p = 1;
		pru = 1;

		if (n == 0)
			_putchar('0');
		else if (n < 0)
		{
			_putchar('-');
			n = -n;
		}
	}

	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}

	if (pru == 1)
	{
		p = 0;
	}
}
