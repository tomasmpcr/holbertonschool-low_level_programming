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
	int i, j, r;

	r = '1';
	for (i = '0'; i <= '9'; i++)
	{

		for (j = r; j <= '9'; j++)
		{
			putchar(i);
			putchar(j);

			if (i == '8' && j == '9')
			{
				putchar('\n');
			}
			else
			{
				putchar(',');
				putchar(' ');
			}
		}
		r++;
	}

	return (0);
}
