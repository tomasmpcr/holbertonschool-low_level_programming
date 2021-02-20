#include <stdio.h>
#include "holberton.h"

/**
 * main - loco..
 *
 * Return: void.
 */
int main(void)
{
	long num = 612852475143, div = 2, fact;

	for (; 1 == 1;)
	{
		if ((num % div) != 0)
		{
			div = div + 1;
		}
		else
		{
			fact = div;
			num = num / div;

			if (num == 1)
			{
				break;
			}
		}
	}

	printf("%ld\n", fact);
	return (0);
}
