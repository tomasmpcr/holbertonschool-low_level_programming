#include "holberton.h"
#include "1-alphabet.c"

/**
 * print_alphabet_x10 - Entry point
 *
 * Return: Always 0 (Success)
 */
void print_alphabet_x10(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		print_alphabet();
	}
}
