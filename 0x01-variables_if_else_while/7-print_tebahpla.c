#include <stdio.h>

/**
 * main - main entry point
 * prints the lowercase alphabet in reverse
 * Return: 0 upon completion
 */

int main(void)
{
	char a;

	for (a = 'z' ; a >= 'a' ; a--)
		putchar(a);
	putchar('\n');
	return (0);
}
