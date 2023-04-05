#include "lists.h"

/**
 *print_listint - function prototype
 *@h: head
 *Return: size_t
 */

size_t print_listint(const listint_t *h)
{
	size_t list = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		list++;
		h = h->next;
	}
	return (list);
}
