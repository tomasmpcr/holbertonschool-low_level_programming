#include "variadic_functions.h"
#include <stdio.h>

/**
 *print_all - print all the strings
 *@format: cosas
 *
 *Return: void
 */
void print_all(const char * const format, ...)
{
	va_list ap;
	int i = 0, j = 0;
	char *sep = "";

	s_dt dt[] = {
	{"c", pr_char},
	{"i", pr_int},
	{"f", pr_float},
	{"s", pr_char_p},
	{NULL, NULL}
	};

	va_start(ap, format);
	while (format[i] != '\0')
	{
		j = 0;
		while (dt[j].l != NULL)
		{
			if (dt[j].l[0] == format[i])
			{
				printf("%s", sep);
				dt[j].f(ap);
				sep = ", ";
			}
			j++;
		}
		i++;
	}
	printf("\n");
	va_end(ap);
}

/**
 *pr_char - print
 *@ap: void
 *
 *Return: void
 */
void pr_char(va_list ap)
{
	printf("%c", va_arg(ap, int));
}

/**
 *pr_int - print
 *@ap: void
 *
 *Return: void
 */
void pr_int(va_list ap)
{
	printf("%i", va_arg(ap, int));
}

/**
 *pr_float - print
 *@ap: void
 *
 *Return: void
 */
void pr_float(va_list ap)
{
	printf("%f", va_arg(ap, double));
}

/**
 *pr_char_p - print
 *@ap: void
 *
 *Return: void
 */
void pr_char_p(va_list ap)
{
	char *ram;
	
	ram = va_arg(ap, char *);

	if (ram == NULL)
	{
		printf("(nil)");
		return;
	}

	printf("%s", ram);
}
