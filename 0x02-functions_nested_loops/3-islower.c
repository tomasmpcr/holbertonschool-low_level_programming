#include "holberton.h"

/**
 * _islower - return islower
 * @c: number the char
 *
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c <= 'a' && c >= 'z')
	{
		return (0);
	}
	else
	{
		return (1);
	}
}
