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
	int i, j = 0, n = 0, inc = 1, paso = 0, block = 0, primSigno = 0;

	for (i = 0; s[i] != '\0'; i++)
	{

		if (block == 0)
		{
			if (s[i] == '+' || s[i] == '-')
			{
				if (primSigno == 0)
				{
					primSigno = 1;
					signo = s[i];
				}
				else
					signo = _sumaSignos(signo, s[i]);
			}

			if (s[i] >= '0' && s[i] <= '9')
				paso = 1;
			else
			{
				if (paso == 1)
				{
					j = i - 1;
					block = 1;
				}
			}
		}
		else
			break;
	}

	if (block == 0)
		j = i;

	for (; j >= 0; j--)
	{
		if (s[j] >= '0' && s[j] <= '9')
		{
			n = n + ((s[j] - '0') * inc);
			inc = inc * 10;
		}
	}

	if (signo == '-')
	{
		if (n > 0)
			n = -n;
	}

	return (n);
}
