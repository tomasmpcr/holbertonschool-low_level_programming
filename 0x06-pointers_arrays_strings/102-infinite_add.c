#include "holberton.h"
#include <stdio.h>

/**
 * _strlen - loco..
 *@s: number
 *
 * Return: void.
 */
int _strlen(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
	}

	return (i);
}

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
	int i = _strlen(n1), j = _strlen(n2), cal = 0, rN = 0, resto = 0, len = 0, num1 = 0, num2 = 0;

	num1 = n1[--i];
	num2 = n2[--j];


	if (i > j)
		len = i;
	else
		len = j;

	for (; len >= 0; len--)
	{
		cal = (num1 - '0') + (num2 - '0') + resto;

		if (cal >= 10)
		{
			resto = (cal % 10);
			r[rN++] = (cal / 10) + '0';
		}
		else
			r[rN++] = (cal % 10) + '0';

		printf("%i + %i + %i = %i | rN: %i - r[%i] = %c\n", num1 - '0', num2 - '0', resto, cal, rN, rN, r[rN]);

		if(i > 0)
			num1 = n1[--i];
		else
			num1 = '0';

		if(j > 0)
			num2 = n2[--j];
		else
			num2 = '0';

		if (rN > size_r)
		{
			r[0] = '0';
			r[1] = '\0';
			break;
		}
	}

	printf("LOCO: %s\n", r);
	if (i <= 0 && j <= 0)
	{
		printf("PASO\n");
		r[rN++] = resto + '0';
		r[rN++] = '\0';
	}

	return (r);
}
