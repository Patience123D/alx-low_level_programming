#include "function_pointers.h"

/**
 *int_index - function
 *Return: -1
 *@array: array
 *@size:size of element
 *@cmp: function pointer
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int v;

	if (array == NULL || size <= 0 || cmp == NULL)
		return (-1);
	for (v = 0; v < size; v++)
	{
		if (cmp(array[v]))
			return (v);
	}
	return (-1);
}
