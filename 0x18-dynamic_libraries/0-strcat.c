#include "main.h"

/**
 **_strcat - main function
 *@dest: destination string
 *@src: source string
 *Return: dest
 *
 */

char *_strcat(char *dest, char *src)
{
	int j;
	int k;

	for (j = 0; dest[j] != '\0';)
	{
		j++;
	}
	for (k = 0; src[k] != '\0';)
	{
	dest[j] = src[k];
		j++;
		k++;
	}
	dest[j] = '\0';
	return (dest);
}
