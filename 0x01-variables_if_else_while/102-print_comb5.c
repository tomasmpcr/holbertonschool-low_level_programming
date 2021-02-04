#include <ctype.h>
#include <stdio.h>
#include <string.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int d1, u1, d2, u2 = '1';

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (u1 = '0'; u1 <= '9'; u1++)
		{
			for (d2 = '0'; d2 <= '9'; d2++)
			{
				for (; u2 <= '9'; u2++)
				{
					putchar(d1);
					putchar(u1);
					putchar(' ');
					putchar(d2);
					putchar(u2);

					if (d1 == '9' && u1 == '8' && d2 == '9' && u2 == '9')
					{
						putchar('\n');
						goto TERMINAR;
					}
					else
					{
						putchar(',');
						putchar(' ');
					}
				}
				if (d1 == d2)
				{
					u2 = u1 + 1;
				}
			}
		}
	}

TERMINAR:
	return (0);
}
