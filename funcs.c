#include "main.h"

/**
  * print_c - function to print a character
  * @paramerter_args: char to print
  * Retutrn: no. of characters, -1 if NULL
  */

int print_c(va_list parameter_args)
{
	char _char = va_arg(parameter_args, int);
	return (_putchar(_char));
}

/**
  * print_s - function to print a string
  * @parameter_args: string to print
  * Return: no. f chars, -1 if NULL
  */

int print_s(va_list parameter_args)
{
	int i;

	char *str = va_arg(parameter_args, char *);

	if (str == NULL)
		str = "(null)";
	for (i = 0; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	return (i);
}

int print_percent(__attribute__((unused))va_list parameter_args)
{
	char c = '%';
	_putchar(c);

	return (1);
}
