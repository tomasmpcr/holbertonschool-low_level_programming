#include "holberton.h"

/**
 *is_prime_number2 - number
 *@n: int
 *@i: int
 *@a: int
 *--------------------------
 *Return: int
 */
int is_prime_number2(int n, int i, int a)
{
	if (i <= n)
	{
		if ((n % i) == 0)
			a++;
		i++;
		return (is_prime_number2(n, i, a));
	}
	else
	{
		if (a == 2)
			return (1);
		else
			return (0);
	}
}

/**
 *is_prime_number - number
 *@n: int
 *--------------------------
 *Return: int
 */
int is_prime_number(int n)
{
	return (is_prime_number2(n, 1, 0));
}
