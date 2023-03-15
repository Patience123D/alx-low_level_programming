#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 *main - main function
 *Return: 1 and 0
 *@argv:array
 *@argc: counts arguments
 *
 */

int main(int argc, char *argv[])
{
	int m;
	int p;

	if (argc == 1 || argc == 2)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		p = 1;

		for (m = 1; m < 3; m++)
		p *= atoi(argv[m]);

		printf("%d\n", p);
	}

	return (0);
}
