#include "holberton.h"

/**
 *_atoi - loco..
 *@s: char
 *
 * Return: int.
 */
int _atoi(char *s)
{
	int n = 0, i, calSig = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == '-')
			calSig *= -1;

		if (s[i] >= '0' && s[i] <= '9')
			n = n * 10 + calSig * (*(s + i) - '0');
		else if (n != 0)
			break;
	}

	return (n);
}
