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
	int lastDigit = _abs(n) % 10;
	_putchar(lastDigit + '0');
	return (lastDigit);
}
