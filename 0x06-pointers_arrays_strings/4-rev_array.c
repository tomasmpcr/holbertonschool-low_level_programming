#include "holberton.h"

/**
 *reverse_array - caracol
 *@a: *
 *@n: *
 *
 *Return: *
 */
void reverse_array(int *a, int n)
{
	int i, j, base = 0;

	for (i = 0, j = n - 1; i < (n / 2); i++, j--)
	{
		base = a[i];
		a[i] = a[j];
		a[j] = base;
	}
}
