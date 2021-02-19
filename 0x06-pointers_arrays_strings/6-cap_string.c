#include "holberton.h"

/**
 *comprobar - jaja
 *@c: char
 *
 *Return: int
 */
int comprobar(char c)
{
	int paso = 0;

	if (c == ' ' || c == '\t' || c == '\n' || c == ',')
		paso = 1;
	else if (c == ';' || c == '.' || c == '!' || c == '?')
		paso = 1;
	else if (c == '"' || c == '(' || c == ')' || c == '{' || c == '}')
		paso = 1;

	return (paso);
}


/**
 *cap_string - 8 (el culo te abrocho)
 *@c: *
 *
 *Return: *
 */
char *cap_string(char *c)
{
	int i;

	if (c[0] >= 'a' && c[0] <= 'z')
		c[0] -= 32;


	for (i = 0; c[i] != '\0'; i++)
	{
		if (c[i] >= 'a' && c[i] <= 'z')
		{
			if (comprobar(c[i - 1]))
				c[i] -= 32;
		}
	}

	return (c);
}
