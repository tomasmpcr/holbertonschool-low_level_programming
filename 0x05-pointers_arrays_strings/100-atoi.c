#include "holberton.h"

/**
 *_atoi - loco..
 *@s: char
 *
 * Return: int.
 */
int _atoi(char *s)
{
	int n = 0, i, calSig = 1, terminar = 0;
	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			calSig *= -1;
		if (s[i] >= '0' && s[i] <= '9')
		{
			n = (n * 10) + (s[i] - '0');
			terminar = 1;
		}
		else
		{
			if (terminar == 1)
				break;
		}
	}
	n *= calSig;
	return (n);
}
