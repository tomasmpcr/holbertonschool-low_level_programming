#include "holberton.h"

/**
 *_print_rev_recursion - print a string in form recurisive and rev
 *@s: the string
 *-----------------------------------------------------
 *return: void
 */
void _print_rev_recursion(char *s)
{
	if (s[0] != '\0')
	{
		s++;
		_print_rev_recursion(s);
		s--;
		_putchar(*s);
	}
}
