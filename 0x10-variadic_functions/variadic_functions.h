#ifndef VLISTS
#define Vlists
#include <stdarg.h>
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);
void p_char(va_list inputs);
void p_integer(va_list inputs);
void p_float(va_list inputs);
void p_string(va_list inputs);
void p_string(va_list inputs);
typedef struct lists{
	char *f;
	void(*d)(va_list);
} li;
#endif
