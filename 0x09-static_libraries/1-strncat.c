#include "main.h"

/**
 **_strncat - main function that concatenates two strings
 *@dest: destination string
 *@src: source string
 *Return: 0
 *@n: parameter to be used for concatenation
 */

char *_strncat(char *dest, char *src, int n)
{
	int destlength = 0;
	int srclength = 0;
	int a;

	for (a = 0 ; dest[a] != '\0' ; a++)
		destlength++;
	for (a = 0; src[a] != '\0' ; a++)
		srclength++;
	for (a = 0 ; a < n ; a++)
		dest[destlength + a] = src[a];
	return (dest);
}
