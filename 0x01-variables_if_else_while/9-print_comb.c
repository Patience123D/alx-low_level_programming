#include <stdio.h>

/**
 * main - main function
 * prints all possible combinations of single-digit numbers
 * Return: 0
 */

int main(void)
{
	int b;

	for (b = '0'; b <= '9' ; b++)
	{
		putchar(b);

		if (b != '9')
		{
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');
	return (0);
}

