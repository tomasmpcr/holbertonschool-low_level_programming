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
	int x, y;

	for (x = '0'; x <= '9'; x++)
	{
		putchar(x);
	}

	for (y = 'A'; y <= 'F'; y++)
	{
		putchar(y);
	}

	putchar('\n');
	return (0);
}
