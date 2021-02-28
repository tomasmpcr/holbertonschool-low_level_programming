#include <stdio.h>
#include <stdlib.h>

/**
 *main - print the number
 *@argc: int
 *@argv: char
 *
 *Return: int
 */
int main(int argc, char **argv)
{
	int i, importe = 0, monedas = 0;

	if (argc == 2)
	{
		importe = atoi(argv[1]);

		if (importe <= 0)
		{
			printf("Error\n");
			return (1);
		}

		for (i = 0; 1 == 1; i++)
		{
			if (importe >= 25)
			{
				importe -= 25;
				monedas++;
			}
			else if (importe >= 10)
			{
				importe -= 10;
				monedas++;
			}
			else if (importe >= 5)
			{
				importe -= 5;
				monedas++;
			}
			else if (importe >= 2)
			{
				importe -= 2;
				monedas++;
			}
			else if (importe >= 1)
			{
				importe -= 1;
				monedas++;
			}

			if (importe <= 0)
				break;
		}

		printf("%i\n", monedas);
	}

	return (0);
}
