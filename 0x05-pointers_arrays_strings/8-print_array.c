#include "main.h"

/**
 *print_array - function that prints n elements of an array
 *@a: 1st parameter
 *@n: 2nd parameter
 *Return: a and n inputs
 *
 *
 */

void print_array(int *a, int n)
{
	int p;

	for (p = 0; p < (n - 1); p++)
	{
		printf("%d, ", a[p]);
	}
		if (p == (n - 1))
		{
			printf("%d", a[n - 1]);
		}
	printf("\n");
}
