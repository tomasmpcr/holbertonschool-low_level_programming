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
	int x, tw;

	for (x = 'A'; x <= 'Z'; x++)
	{
		tw = tolower(x);
		putchar(tw);
	}

	for (x = 'A'; x <= 'Z'; x++)
        {
                putchar(x);
        }

	putchar('\n');
	return (0);
}
