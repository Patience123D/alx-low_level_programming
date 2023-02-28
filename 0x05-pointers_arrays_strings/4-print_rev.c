#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int match = 0;
	int k;

	while (*s != '\0')
		match++;
	s++
		s--;
	for (k = match; k > 0; k--)
		_putchar(*s);
	_putchar('\n');
}
