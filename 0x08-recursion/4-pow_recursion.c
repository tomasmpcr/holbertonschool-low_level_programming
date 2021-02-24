#include "holberton.h"

/**
 *_pow_recursion - print the x raised to power of y
 *@x: the int
 *@y: the int
 *-----------------------------------------------------
 *Return: int
 */
int _pow_recursion(int x, int y)
{
	int n = 0;

	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);

	n = x * _pow_recursion(x, y - 1);

	return (n);
}
