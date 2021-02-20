#include "holberton.h"
#include "6-abs.c"

/**
 * print_last_digit - return print_last_digit
 * @n: number
 *
 * Return: Always 0 (Success)
 */
int print_last_digit(int n)
{
	int lastDigit = n % 10;

	if (lastDigit < 0)
		lastDigit = -lastDigit;

	_putchar(lastDigit + '0');
	return (lastDigit);
}
