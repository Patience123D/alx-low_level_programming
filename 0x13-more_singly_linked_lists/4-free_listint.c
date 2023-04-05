#include "lists.h"

/**
 *free_listint - function
 *@head: pointer
 */

void free_listint(listint_t *head)
{
	listint_t *ptr;

	if (head)
	{
		ptr = head;
		head = head->next;
		free(ptr);
	}
}
