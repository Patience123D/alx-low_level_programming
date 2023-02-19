#include <stdio.h>

/**
 * main - main entry point
 * prints all the numbers of base 16 in lowercase
 * Return: 0 on success
 */

int main(void)
{
	char n;
	char m = '0';

	while (m <= '9')
	{
		putchar(m);
		m++;
	}
	for (n = 'a'; n <= 'f'; n++)
	{
		putchar(n);
	}
	putchar('\n');
	return (0);
}
