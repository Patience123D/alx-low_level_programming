#include <stdio.h>
#include "main.h"

/**
 *main - prints the arguments
 *Return: 0
 *@argv: array
 *@argc: counts numbers
 *
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%i\n", argc - 1);

	return (0);
}
