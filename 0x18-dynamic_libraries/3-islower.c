#include "main.h"

/**
 * _islower - check and print local case
 * @g: printed parameter
 * Return: 1 upon completion
 * 0 otherwise
 */

int _islower(int g)
{
	if (g >= 97 && g <= 122)
		return (1);
	else
		return (0);
}
