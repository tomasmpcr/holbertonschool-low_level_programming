#include "holberton.h"

/**
 *infinite_add - lolololo
 *@n1: asd
 *@n2: asd
 *@r: asd
 *@size_r: asd
 *
 *Return: asd
 */
char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int i, j, rN = 0, cuenta, num1 = n1[0], num2 = n2[0], resto = 0;

	for (i = 0, j = 0; rN < size_r;)
	{
		cuenta = ((num1 - '0') + (num2 - '0')) + resto;
		resto = 0;

		if (cuenta > 10)
		{
			r[rN++] = (cuenta / 10) % 10;
			resto = cuenta % 10;
		}
		else
			r[rN++] = cuenta;

		if (n1[i++] != '\0')
			num1 = n1[i];
		else
			num1 = '0';

		if (n2[j++] != '\0')
			num2 = n2[j];
		else
			num2 = '0';
	}

	if (n1[i] != '\0' || n2[j] != '\0')
	{
		r[0] = '0';
		r[1] = '\0';
	}

	return (r);
}
