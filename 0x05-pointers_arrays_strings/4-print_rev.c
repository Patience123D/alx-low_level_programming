#include "main.h"
/**
 * print_rev - function that prints a string, in reverse
 * @s: parameter
 * Return: 0
 */

void print_rev(char *s)
{
	int k = 0;

	while (s[k])
	k++;
	while (k--)
	_putchar(s[k]);
	_putchar('\n');
}
