#include "main.h"

/**
 *get_bit - function prototype that returns the value of a bit at a given index.
 *@n: parameter
 *@index: bit location
 *Return: bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int set;

	if (index > 64)
		return (-1);
	set = n >> index;
	return (set & 0x1);
}
