#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: unsigned int with decimal value of binsry number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int n;
	unsigned int num;

	num = 0;
	if (!b)
		return (0);
	for (n = 0; b[i] != '\0'; n++)
	{
		if (b[n] != '0' && b[n] != '1')
			return (0);
	}
	for (n = 0; b[n] != '\0'; n++)
	{
		num <<= 1;
		if (b[n] == '1')
			num += 1;
	}
	return (num);
}
