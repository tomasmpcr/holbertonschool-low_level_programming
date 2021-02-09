#include "holberton.h"

/**
 * times_table - return times_table
 *
 * Return: Always 0 (Success)
 */
void times_table(void)
{
	int t, m, c;

	for (t = 0; t <= 9; t++)
	{
		for (m = 0; m <= 9; m++)
		{
			c = t * m;

			if ((c / 10) != 0)
			{
				_putchar((c / 10) + '0');
			}
			else
			{
				_putchar(' ');
			}

			_putchar((c % 10) + '0');

			if (m != 9)
			{
				_putchar(',');
				_putchar(' ');
			}
		}
		_putchar('\n');
	}
}
