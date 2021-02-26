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
	int i, j, mul = 0;
	char *p;

	for (i = 1; i < argc; i++)
	{
		p = argv[i];

		for (j = 0; p[j] != '\0'; j++)
		{
			if ((p[j] >= 'a' && p[j] <= 'z') || (p[j] >= 'A' && p[j] <= 'Z'))
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
