#include "main.h"

/**
 *_abs - checks for an absolute value
 *@h: parameter to be checked
 *Return: always h
 */

int _abs(int h)
{
	if (h < 0)
		h = -(h);
	else if (h >= 0)
		h = h;
	return (h);
}
