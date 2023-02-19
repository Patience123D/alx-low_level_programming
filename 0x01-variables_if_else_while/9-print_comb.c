#include <stdio.h>

/**
 * main - main function
 * prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = 0 ; b <= 9 ; b++)
	{
		if (b == 9)
		putchar(b + '0');
		else
		{
			putchar(b + '0');
		putchar(',');
		putchar(',');
		}
	}
	return (0);
}
