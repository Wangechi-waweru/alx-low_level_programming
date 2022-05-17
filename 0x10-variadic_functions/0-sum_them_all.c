#include "variadic_fuctions.h"

/**
  * sum_them_all - calculates the sum of all its parameters
  * @n: number of arguments passed to the function
  *
  * Return: the resulting sum
  */
int sum_them_all(const unsigned int n, ...)
{
	register unsigned int i;
	int sum = 0;
	va_list arguments;

	va_start(arguments, n);

	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);

	va_end(arguments);

	return (sum);
}
