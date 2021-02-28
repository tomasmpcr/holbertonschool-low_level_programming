#include <stdio.h>

/**
 *main - Print the number of the arguments
 *@argc: int
 *@argv: char
 *
 *Return: int 0
 */
int main(int argc, char **argv __attribute__((unused)))
{
	*argv = 0;
	printf("%i\n", argc - 1);

	return (0);
}
