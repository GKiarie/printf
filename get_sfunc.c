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
		{'i', print_integer},
		{'b', print_binary},
		{'u', print_unsigned},
		{'o', print_oct},
		{'x', print_x},
		{'X', print_X},
		{'S', print_S},
<<<<<<< HEAD
		{'r', print_r},
                {'p', print_p},
=======
		{'R', print_rot13}
>>>>>>> 7e22c24dbf5d199df4f96da366416a407bb80617
	};

	for (; p[n].spec; n++)
	{
		if (c == p[n].spec)
			return (p[n].f);
	}
	return (NULL);
}
