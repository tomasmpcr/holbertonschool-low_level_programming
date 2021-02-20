#include "holberton.h"

/**
 * swap_int - loco..
 *@a: number
 *@b: number
 *
 * Return: void.
 */
void swap_int(int *a, int *b)
{
	int a2 = *a;

	*a = *b;
	*b = a2;
}
