#include "main.h"

/**
  * print_binary - function that takes in unsigned
  * int and prints its binary equivalent
  * @parameter_args: unsigned int argument
  * Return: no. of digits printed
  */

int print_binary(va_list parameter_args)
{
	unsigned int i, j, k, sum;
	unsigned int a[32];
	int count;

	j = va_arg(parameter_args, unsigned int);
	k = 2147483648;
	a[0] = j / k;

	for (i = 0; i < 32; i++)
	{
		k /= 2;
		a[i] = (k / j) % 2;
	}

	for (i = 0, sum = 0, count = 0; i < 32; i++)
	{
		sum += a[i];
		if (sum || i == 31)
		{
			_putchar('0' + a[i]);
			count++;
		}
	}
	return (count);
}
