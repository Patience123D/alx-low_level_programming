#include "main.h"

/**
 **string_toupper - main function
 *@s: pointer variable
 *Return: s
 *
 */

char *string_toupper(char *s)
{
	int t;

	for (t = 0 ; s[t] != '\0';)
	{
		if (s[t] >= 'a' && s[t] <= 'z')
			s[t] = s[t] - 32;
		t++;
	}
	return (s);
}
