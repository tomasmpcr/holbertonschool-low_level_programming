#include "holberton.h"




/**
 * print_the_int - imprime numero
 *@s: number
 *
 * Return: void.
 */
void print_the_int(int s)
{
	if (s != 0)
	{
		print_the_int(s / 10);
		_putchar((s % 10) + '0');
	}
}





/**
 * print_times_table - loco..
 *@n: number
 *
 * Return: void.
 */
void print_times_table(int n)
{
	int cal, i, j;

	if (n < 15 && n > 0)
	{
		for (i = 0; i <= n; i++)
		{
			for (j = 0; j <= n; j++)
			{
				cal = i * j;


				if (cal != 0)
				{
					print_the_int(cal);
				}
				else
				{
					_putchar('0');
				}

				if (j != n)
				{
					_putchar(',');
					_putchar(' ');

					if (cal < 10)
						_putchar(' ');

					if (cal < 100)
						_putchar(' ');
				}
			}
			_putchar('\n');
		}
	}
}
