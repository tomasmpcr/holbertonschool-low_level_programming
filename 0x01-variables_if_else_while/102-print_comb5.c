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
	int d1, u1, d2, u2, i;

	for (d1 = '0'; d1 <= '9'; d1++)
	{
		for (u1 = '0'; u1 <= '9'; u1++)
		{
			for (d2 = '0'; d2 <= '9'; d2++)
			{
				if (d1 == d2)
				{
					i = u1 + 1;
				}
				else
				{
					i = 0;
				}
				
				for (u2 = i; u2 <= '9'; u2++)
				{
					putchar(d1);
					putchar(u1);
					putchar(' ');
					putchar(d2);
					putchar(u2);
					
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	return (0);
}
