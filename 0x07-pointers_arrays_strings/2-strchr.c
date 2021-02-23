#include "holberton.h"

/**
 *_strchr - imp
 *@s: array
 *@c: char
 *
 *Return: char puntero
 */

char *_strchr(char *s, char c)
{
	for (; 1;s++)
	{
		if (s[0] == c)
			break;
		else if (s[0] == '\0')
			return (0);
	}

	return (s);
}
