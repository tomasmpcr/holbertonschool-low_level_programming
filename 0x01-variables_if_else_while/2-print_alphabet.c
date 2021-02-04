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
	char x, tw;

	for (x = 'A'; x <= 'Z'; x++)
	{
		tw = tolower(x);
		putchar(tw);
	}
	putchar('\n');
	return (0);
}

