#include "holberton.h"



/**
 * print_number - loco..
 *@n: num
 *
 * Return: void.
 */
void print_number(int n)
{
	if (n != 0)
	{
		print_number(n / 10);
		_putchar((n % 10) + '0');
	}
}



/**
 * print_1_14 - loco..
 *
 * Return: void.
 */
void print_1_14(void)
{
	int i;

	for (i = 0; i <= 14; i++)
	{
		print_number(i);
	}
}



/**
 * more_numbers - loco..
 *
 * Return: void.
 */
void more_numbers(void)
{
	int i;

	for (i = 0; i <= 9; i++)
	{
		print_1_14();
		_putchar('\n');
	}
}
