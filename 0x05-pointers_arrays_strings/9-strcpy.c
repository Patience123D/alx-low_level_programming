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
	int k;

	if (dest == NULL)
		return (NULL);
	for (k = 0; src[k] != '\0' ; k++)
		dest[k] = src[k];
	return (dest);
}
