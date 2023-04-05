#include "lists.h"

/**
 *listint_len - function
 *@h: pointer
 *Return: b
 */

size_t listint_len(const listint_t *h)
{
	size_t b = 0;

	while (h)
		h = h->next, b++;
	return (b);
}
