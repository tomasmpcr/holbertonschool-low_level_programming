#include "holberton.h"

/**
 * _isalpha - return islower
 * @c: number the char
 *
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
if ((c >= 'a' && c <= 'z') || (c >= '0' && c <= '9') || (c >= 'A' && c <= 'Z'))
{
	return (1);
}
else
{
	return (0);
}
}
