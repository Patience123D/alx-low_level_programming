#include "main.h"

/**
 *_strcpy - copied string
 *@dest: destination array
 *@src: source array
 *Return: dest
 *
 *
 */

char *_strcpy(char *dest, char *src)
{
	int k = -1;

	do {
		k++;
		dest[k] = src[k];
	} while (src[k] != '\0');

	return (dest);
}
