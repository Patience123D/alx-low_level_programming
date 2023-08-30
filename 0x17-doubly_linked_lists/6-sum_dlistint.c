#include "lists.h"
/**
 * sum_dlistint - function returns sum of all data of a list
 *@head: pointer to pointer of head of linked list
 * Return: 0 if empty
 */

int sum_dlistint(dlistint_t *head)
{
	int xor = 0;

	while (head)
	{
		xor += head->n;
		head = head->next;
	}
	return (xor);
}
