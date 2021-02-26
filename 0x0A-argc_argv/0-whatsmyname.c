#include "holberton.h"
#include <stdio.h>

/**
 *main - function print the argv
 *
 *Return: 0
 */
int main(int argc, char **argv)
{
        while(argc--)
                printf("%s\n", *argv++);
	return (0);
}
