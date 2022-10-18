#include "main.h"

/**
  * _printf - function to do formatted
  * printing
  * @format: first argument, character string
  * @...: signifies variadic input
  * Return: Number of chars printed, exclude null
  */

int _printf(const char *format, ...)
{
	int i, j, len;
	char *param_str;
	char _char;

	va_list parameter_args;

	va_start(parameter_args, format);

	for (i = 0; format[i] != '\0'; i++)
	{
		if (format[i] != '%')
			_putchar(format[i]);
		else
		{
			switch (format[i + 1])
			{
				case 'c':
					_char = va_arg(parameter_args, int);
					_putchar(_char);
					i++;
					break;
				case 's':
					param_str = va_arg(parameter_args, char *);
					len = 0;
					while (param_str[j] != '\0')
					{
						_putchar(param_str[j]);
						len += 1;
						j++;
					}
					j++;
					break;
				default:
					_putchar(format[i]);
					break;
			}
		}
	}
	va_end(parameter_args);
	return ((i - 1) + len);
}
