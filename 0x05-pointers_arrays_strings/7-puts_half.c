#include "main.h"
/**
 *puts_half - function that prints half of a string
 *@str: parameter
 *Return; 0
 *
 *
 */

void puts_half(char *str)
{
	int p;
	int half = 0;

	for (p = 0; str[p] != '\0' ; p++)
		half++;
	if (half % 2 == 0)
	{
		for (p = half / 2 ; str[p] != '\0'; p++)
			_putchar(str[p]);
	_putchar('\n');
	}
	else if (half % 2 != 0)
	{
		for (p = (half - 1) / 2 ; str[p] != '\0'; p++)
			_putchar(str[p]);
	_putchar('\n');
	}
}
