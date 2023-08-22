#include "main.h"

/**
 *_memcpy - prototype function
 *@dest: destination string
 *@src: source string
 *@n: parameter
 *Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
	{
	int i;
	int j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
