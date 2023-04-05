#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *list_len - the list length
 *@h: head
 *Return: number of elements
 */

size_t list_len(const list_t *h)
{
	int b;

	for (b = 0; h; b++)
		h = h->next;
	return (b);
}
