#include "holberton.h"

/**
 *_strlen - count the long in array
 *@s: the string
 *
 *Return: int
*/
unsigned int _strlen(const char *s)
{
	unsigned int i;

	for (i = 0; s[i] != '\0';)
		i++;

	return (i);
}

/**
 *binary_to_uint - convert binary number to b10
 *@b: the binary number reciv in punter char
 *
 *Return: int
*/
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0, num = 0, tab = 1;

	if (b == NULL)
		return (0);

	for (i = _strlen(b); i > 0; i--)
	{
		if (b[i - 1] == '0' || b[i - 1] == '1')
		{
			if (b[i - 1] == '1')
			{
				num += tab;
			}
			tab *= 2;
		}
		else
		{
			return (0);
		}
	}

	return (num);

}
