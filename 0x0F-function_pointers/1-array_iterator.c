#include "function_pointers.h"

/**
 *array_iterator - print the array
 *@array: The array
 *@size: The size
 *@action: The function print a number
 *
 *Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
