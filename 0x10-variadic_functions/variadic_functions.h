#ifndef VF_H
#define VF_H

#include <stdarg.h>

typedef struct dt{
	char *l;
	void (*f)(va_list);
} s_dt;

void pr_char(va_list ap);
void pr_int(va_list ap);
void pr_float(va_list ap);
void pr_char_p(va_list ap);

int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

#endif /* VF_H */
