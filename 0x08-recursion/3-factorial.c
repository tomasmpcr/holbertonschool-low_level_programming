#include "holberton.h"

/**
 *factorial - print the result the factorial number
 *@n: the int
 *-----------------------------------------------------
 *return: int
 */
int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
		return (-1);

	n = n * factorial(n - 1);

	return (n);
}
