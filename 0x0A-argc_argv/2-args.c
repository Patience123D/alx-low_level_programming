#include <stdio.h>
#include "main.h"

/**
 *main - main function
 *
 *Return: 0
 *@argv: array
 *@argc: prints arguments
 */

int main(int argc, char *argv[])
{
	int o;

	for (o = 0; o < argc; o++)
	printf("%s\n", argv[o]);

	return (0);
}
