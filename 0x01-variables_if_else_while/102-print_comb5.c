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
	int i, j, r, f = '1';

	for (i = '0'; i <= '9'; i++)
	{
		for (j = '0'; j <= '9'; j++)
		{

			if (i == '9' && j == '9')
			{
				break;
			}

			for (r = '0'; r <= '9'; r++)
			{
				for (; f <= '9'; f++)
				{
					putchar(i);
					putchar(j);
					putchar(' ');
					putchar(r);
					putchar(f);


					putchar(',');
					putchar(' ');
				}
				f = '0';
			}
		}

		if (i == '9' && j == '8' && r == '9' && f == '9')
		{
			putchar('\n');
			break;
		}
	}

	return (0);
}
