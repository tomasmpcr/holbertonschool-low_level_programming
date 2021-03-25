#include "holberton.h"

/**
 *print_binary_r - print binary number
 *@n: the number unsigned long int
 *
 *Return: void
*/
void print_binary_r(unsigned long int n)
{
	unsigned long int ram;

	if (n == 0)
		return;

	ram = n & 1;

	n = n >> 1;
	print_binary_r(n);

	_putchar(ram + '0');
}


/**
 *print_binary - print binary number
 *@n: the number unsigned Ãlong int
 *
 *Return: void
*/
void print_binary(unsigned long int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	print_binary_r(n);
}
