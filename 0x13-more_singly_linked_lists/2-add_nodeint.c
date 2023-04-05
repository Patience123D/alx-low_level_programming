#include "lists.h"

/**
 **add_nodeint - function
 *@n: number
 *@head: pointer
 * Return: the list
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *p = malloc(sizeof(listint_t));

	if (!p)
		return (NULL);
	p->n = n;
	p->next = *head;
	*head = p;

	return (*head);
}
