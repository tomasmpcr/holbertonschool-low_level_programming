#include "holberton.h"

/**
 * _sumaSignos - loco..
 *@signo: char
 *@nuevo: char
 *
 * Return: char.
 */
char _sumaSignos(char signo, char nuevo)
{
	char ret = '+';

	if (signo == '+')
	{
		if (nuevo == '+')
			ret = '+';
		else
			ret = '-';
	}
	else
	{
		if (nuevo == '+')
			ret = '-';
		else
			ret = '+';
	}
	printf(" SIGNO \n");
	return (ret);
}


/**
 * _atoi_atoi - loco..
 *@s: char
 *
 * Return: int.
 */
int _atoi(char *s)
{
	char signo = '+';
	int i, n, inc = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '+' || s[i] == '-')
			signo = _sumaSignos(signo, s[i]);
	}

	for (; i >= 0; i--)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			printf("Encontramos: %i x %i \n",s[i] - '0', inc);
			n = n + ((s[i] - '0') * inc);
			inc = inc * 10;
		}
	}

	return (n);
}
