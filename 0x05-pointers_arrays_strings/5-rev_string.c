#include "main.h"

/**
 * rev_string - function that reverses a string
 * @s: parameter
 * Return: reversed string
 */

void rev_string(char *s)
{
	int len, m, reverse;
	char temp;

	for (len = 0; s[len] != '\0'; len++)
	;
	m = 0;
reverse = len / 2;

	while (reverse--)
	{
		temp = s[len - m - 1];
		s[len - m - 1] = s[m];
		s[m] = temp;
		m++;
	}
}
