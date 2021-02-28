#include <stdio.h>

/**
 *main - Print the number of the arguments
 *@argc: int
 *@argv: char
 *
 *Return: int 0
 */
int main(int argc, char **argv)
{
	*argv = 0;
	printf("%i\n", argc);

	return (0);
}
