#include "function_pointers.h"
#include <stdio.h>

/**
*array_iterator - function
*@array: arrays
*@size: size of the element
*@action: pointer to the function
*Return: nothing
*/

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;
	for (a = 0; a < size; a++)
		action(array[a]);
}
