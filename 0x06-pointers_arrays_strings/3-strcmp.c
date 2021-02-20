#include "holberton.h"

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
 *_strcmp - caracol
 *@s1: *
 *@s2: *
 *
 *Return: *
 */
int _strcmp(char *s1, char *s2)
{
	int i, s1C = _strlen(s1), s2C = _strlen(s2), con  = 0, ret = 0;


	if (s1C > s2C)
		con = s1C;
	else
		con = s2C;

	for (i = 0; i < con; i++)
	{
		ret = s1[i] - s2[i];

		if (ret != 0)
			break;
	}

	return (ret);
}
