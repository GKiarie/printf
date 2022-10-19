#ifndef MAIN_H
#define MAIN_H

/**
  * Header File
  * Function: Contains prototypes
  * functions in the 0x11 directory
  */
#include <stdarg.h>
#include <stddef.h>

/**
  * struct format - struct for printing various types
  * @spec: type to print
  * @f: function to print
  */

typedef struct format
{
	const char spec;
	int (*f)(va_list);
} format_t;

int _putchar(char c);
int _printf(const char *, ...);
int print_c(va_list parameter_args);
int print_s(va_list parameter_args);
int print_percent(__attribute__((unused))va_list parameter_args);
int (*get_sfunc(const char a))(va_list);
int print_decimal(va_list parameter_args);
int print_integer(va_list parameter_args);

#endif