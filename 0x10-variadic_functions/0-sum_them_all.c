#include "variadic_functions.h"
#include <stdio.h>

/**
 *sum_them_all - sum total num pased in the arguments
 *@n: const unsgned int
 *
 *Return: int
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	int i, len = n, sum = 0, x;

	va_start(ap, n);
	for (i = 0; i < len; i++)
	{
		x = va_arg(ap, int);
		if (x == 0)
			break;
		sum = sum + x;
	}
	va_end(ap);

	return (sum);
}
