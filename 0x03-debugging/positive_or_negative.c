#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <time.h>
/* more headers goes there */

/**
 * positive_or_negative - test
 * @n: var
 *
 * Return: Always 0 (Success)
 */
void positive_or_negative(int n)
{
	if (n > 0)
	{
		printf("%d is positive\n", n);
	}
	else if (n < 0)
	{
		printf("%d is negative\n", n);
	}
	else if (n == 0)
	{
		printf("0 is zero\n");
	}
}
