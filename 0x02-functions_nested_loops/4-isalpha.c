#include "main.h"

/**
 *_isalpha - function that checks for alphabetic character
 *@c: parameters to be printed
 *Return: 1 if c is a letter else returns 0
 */

int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}
