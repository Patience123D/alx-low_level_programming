#include "main.h"

/**
 * puts2 - function that prints every other character of a string
 * @str: string input
 * Return: 0
 */

void puts2(char *str)
{
	int mark = 0;
	int m = 0;
	char *y = str;
	int n;

	while (*y != '\0')
		y++;
	mark++;
	m = mark - 1;
	for (n = 0; n <= m; n++)
			if (n % 2 == 0)
			_putchar(str[n]);
			_putchar('\n');
}
