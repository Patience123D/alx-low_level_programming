#include <stdio.h>

/**
 * main - the main entry point
 * prints all single digit numbers of base 10 starting from 0
 * Return: 0
 */

int main(void)
{
	int p;

	for (p  = 0 ; p < 10 ; p++)
		printf("%d", p);
	printf("\n");
	return (0);
}
