#include "main.h"

/**
 * binary_to_uint - protype
 *
 *@b: pointer
 *
 *Return: 0 and var
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int var = 0;
	int length = 0;

	if (b == NULL)
		return (0);

	for (; b[length] == '0' || b[length] == '1'; length++)
	{
		var <<= 1;
		var = var + b[length] - '0';
	}
	return (var);
}
