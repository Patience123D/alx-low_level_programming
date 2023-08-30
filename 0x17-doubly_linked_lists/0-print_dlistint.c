#include "lists.h"

/**
 * print_dlistint - prints all the elements of a dlistint_t list.
 * @h: pointer to head
 * Return: number of nodes in the list
 **/

size_t print_dlistint(const dlistint_t *h)
{
	int nodes;

	for (nodes = 0; h != NULL; nodes++)
	{
		printf("%i\n", h->n);
		h = h->next;
	}
	return (nodes);
}
