#include "main.h"

/**
 *_memset - function prototype
 *@s: pointer string
 *@b: parameter
 *@n: parameter
 *Return: s
 */

char *_memset(char *s, char b, unsigned int n)
	{
	int i;

	for (i = 0; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
