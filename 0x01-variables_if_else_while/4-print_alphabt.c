#include <stdio.h>

/**
 * main - main body
 * prints the alphabet in lowercase
 * Return: 0 on success
 */

int main(void)
{
	char i;

	for (i = 'a' ; i <= 'z' ; i++)
	if (i != 'q' && i != 'e')
		putchar(i);
	putchar('\n');
	return (0);
}
