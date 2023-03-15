#include "main.h"

/**
 **_strncpy - main function that copies a string
 *@n: parameter
 *@dest: destination string
 *@src: source string
 *Return: dest
 *
 *
 */

char *_strncpy(char *dest, char *src, int n)
{
	int p;

	for (p = 0; p < n && src[p] != '\0';)
	{
		dest[p] = src[p];
		p++;
	}
	while (p < n)
	{
		dest[p] = '\0';
		p++;
	}
	return (dest);
}
