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
	int i, j, r, l, f, h;

	l = '1';
	f = '2';
	h = '2';
	for (i = '0'; i <= '9'; i++)
	{

		for (j = l; j <= '9'; j++)
		{

			for (r = f; r <= '9'; r++)
			{
				putchar(i);
				putchar(j);
				putchar(r);

				if (i == '7' && j == '8' && r == '9')
				{
					putchar('\n');
				}
				else
				{
					putchar(',');
					putchar(' ');
				}
			}
			f++;
		}
		h++;
		f = h;
		l++;
	}

	return (0);
}
