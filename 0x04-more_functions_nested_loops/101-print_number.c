#include "holberton.h"

/**
 * print_number - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number(int n)
{
	int cal;

	if (n == 0)
	{
		_putchar('0');
		return;
	}
	else if (n < 0)
	{
		_putchar('-');
		n = -n;
	}

	cal =  n / 10;

	if (cal != 0)
	{
		print_number(cal);
		_putchar((cal % 10) + '0');
	}

}
