#include "main.h"

/**
 *flip_bits -function that returns the number of bits to flip
 *@n: number of bits
 *@m: bits to be flipped
 *Return: number of bits
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int a = n ^ m;
	unsigned long int b = 0;

	while (a > 0)
	{
		b += (a & 1);
		a  >>= 1;
	}
	return (b);
}
