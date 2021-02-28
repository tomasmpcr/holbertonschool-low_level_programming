#include <stdio.h>
#include <stdlib.h>

/**
 *main - Print the number of the arguments
 *@argc: int
 *@argv: char
 *
 *Return: int 0
 */
int main(int argc, char **argv)
{
	int mul = 0;

	if (argc == 3)
	{
		mul = atoi(argv[1]) * atoi(argv[2]);
		printf("%i\n", mul);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
