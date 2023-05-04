#include "main.h"

/**
 *binary_to_uint - function prototype
 *@b: pointer
 *Return: converted number or 0
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int d = 0;
	int g = 0;

	if (!b)
		return (0);
	{
	for (g = 0; b[g]; g++)
		{
	if (b[g] < '0' || b[g] > '1')
		return (0);
	d = 2 * d + (b[g] - '0');
		}
	}
	return (d);
}
