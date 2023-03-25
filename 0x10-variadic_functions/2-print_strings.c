#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 *print_strings - function
 *@...: strings to be printed
 *@n: parameter
 *@separator: string to be printed between strings
 *
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list strings;
	char *str;
	unsigned int count;

	va_start(strings, n);

	for (count = 0; count < n; count++)
	{
		str = va_arg(strings, char *);


		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);


		if (count != (n - 1) && separator != NULL)
			printf("%s", separator);
	}

	printf("\n");
	va_end(strings);
}
