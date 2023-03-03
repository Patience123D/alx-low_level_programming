#include "main.h"

/**
 *_strcmp - main function that compares two strings
 *@s1: 1st pointer variable
 *@s2: 2nd pointer variable
 *Return: s1[h] -s2[h]
 *
 */
int _strcmp(char *s1, char *s2)
{
	int h;

	for (h = 0; s1[h] != '\0' && s2[h] != '\0';)
	{
		if (s1[h] != s2[h])
		{
			return (s1[h] - s2[h]);
		}
		h++;
	}
	return (0);
}
