#include "main.h"

/**
 * _strlen_recursion - function that prints the length of a string
 *
 *Return: width
 *@s: parameter
 *
 */

int _strlen_recursion(char *s)
{
	int width = 0;

	if (*s)
		width++;
	width = width +  _strlen_recursion(s + 1);
	return (width);
}
