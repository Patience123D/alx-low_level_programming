#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - prints the minimum number of coins
 * @argc: number of arguments
 * @argv: array of arguments
 * Return:0 and 1
 */

int main(int argc, char *argv[])
{
	int number, b, results;
	int coin[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	number = atoi(argv[1]);
	results = 0;

	if (number < 0)
	{
		printf("0\n");
		return (0);
	}
	for (b = 0; b < 5 && number >= 0; b++)
	{
		while (number >= coin[b])
		{
			results++;
			number -= coin[b];
		}
	}
	printf("%d\n", results);
	return (0);
}
