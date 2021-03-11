#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_numbers - print the number separeit for the sep
 *@separator: char *
 *@n: const unsgned int
 *
 *Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	int i, x, len;

	len = n;

	va_start(ap, n);
	for (i = 0; i < len; i++)
	{
		x = va_arg(ap, int);
		printf("%i", x);
		if (i != (len - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);

	printf("\n");
}
