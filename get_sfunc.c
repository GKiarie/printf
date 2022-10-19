#include "main.h"

/**
  * get_sfunc - finds a function pointer
  * associated witha particular specifoer
  * @c: specifier
  * Return: pointer to function
  */

int (*get_sfunc(const char c))(va_list)
{
	unsigned int n = 0;

	format_t p[] = {
		{'c', print_c},
		{'s', print_s},
		{'%', print_percent},
		{'d', print_decimal},
		{'i', print_integer}
	};

	for (; p[n].spec; n++)
	{
		if (c == p[n].spec)
			return (p[n].f);
	}
	return (NULL);
}