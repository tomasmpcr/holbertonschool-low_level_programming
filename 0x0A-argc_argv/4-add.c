#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

/**
 *main - Print the number of the arguments
 *
 *return: int 0
 */
int main(int argc, char **argv)
{
	int i, j, mul = 0, l = 0;
	char *p;

	for (i = 1; i < argc; i++)
	{

		l = sizeof(argv) / sizeof(argv[0]);
		p = argv[i];

		for (j = 0; j < l; j++)
		{
			if (!isdigit(p[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		mul = mul + atoi(argv[i]);
	}

	printf("%i\n", mul);
	return (0);
}
