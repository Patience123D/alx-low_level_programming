#include "main.h"
/**
 *reverse_array - main function
 *for reversing the content of an array of integers
 *@a: pointer variable
 *@n: array
 */

void reverse_array(int *a, int n)
{
	int o;
	int b;

	for (o = 0 ; o < n-- ; o++)
	{
		b =  a[b];
		a[b] = a[n];
		a[n] = b;
	}
}
