#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 * Return: reversed string
 */

void rev_string(char *s)
{
	char rev = s[0];
	int count = 0;
	int o;

	while (s[count] != '\0')
		count++;
	for (o = 0; o < count; o++)
	count--;
	rev = s[o];
	s[o] = s[count];
	s[count] = rev;
}
