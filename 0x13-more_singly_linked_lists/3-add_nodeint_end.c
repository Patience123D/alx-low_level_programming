#include "lists.h"

/**
 **add_nodeint_end - function to add
 *@head: pointer
 *Return: head
 *@n: parameter
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t)), *last = *head;

	if (!p)
		return (NULL);
	p->n = n;
	p->next = NULL;
	if (!(*head))
	{
		*head = p;
	}
	else
	{
		while (last->next)
			last = last->next;
		last->next = p;
	}
	return (*head);
}

