#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
#include "main.h"

/**
 * main - program adds positive numbers
 * @argc: count arguments
 * @argv: array
 * Return: 1 if, 0 otherwise
 *
 */

int main(int argc, char *argv[])
{
	int a, j, length, add;
	char *ptr;

	if (argc < 2)
	printf("0\n");
	else
	{
		add = 0;
		for (a = 1; a < argc; a++)
		{
			ptr = argv[a];
			length = strlen(ptr);

			for (j = 0; j < length; j++)
			{
				if (isdigit(*(ptr + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}
			}

			add += atoi(argv[a]);
		}

		printf("%d\n", add);
	}
	return (0);
}

