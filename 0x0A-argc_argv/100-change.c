#include <stdio.h>
#include <stdlib.h>

/**
 *comMoneda - check the import
 *@importe: int
 *
 *Return: int
 */
int comMoneda(int importe)
{
	int moneda = 0;

	if (importe >= 25)
	{
		importe -= 25;
		moneda = 25;
	}
	else if (importe >= 10)
	{
		importe -= 10;
		moneda = 10;
	}
	else if (importe >= 5)
	{
		importe -= 5;
		moneda = 5;
	}
	else if (importe >= 2)
	{
		importe -= 2;
		moneda = 2;
	}
	else if (importe >= 1)
	{
		importe -= 1;
		moneda = 1;
	}

	return (moneda);
}


/**
 *main - print the number
 *@argc: int
 *@argv: char
 *
 *Return: int
 */
int main(int argc, char **argv)
{
	int importe = 0, monedas = 0, ram = 0;

	if (argc == 2)
	{
		importe = atoi(argv[1]);
		for (; 1 == 1;)
		{
			ram = comMoneda(importe);

			if (ram != 0)
			{
				importe -= ram;
				monedas++;
			}

			if (importe <= 0)
				break;
		}
		printf("%i\n", monedas);
	}
	else
	{
		printf("Error\n");
		return (1);
	}

	return (0);
}
