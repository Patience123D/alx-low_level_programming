#include "variadic_functions.h"
#include <stdarg.h>

/**
 *sum_them_all - function to return sum
 *@n: parameters
 *@...: parameter variables to alculate the sum
 *Return: If n == 0, return 0
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int b, sum = 0;

	va_start(ap, n);

	for (b = 0; b < n; b++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}
