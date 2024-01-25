#include "lists.h"
/**
 * free_dlistint - Free the memory
 * @head: head pointer
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *holder = head;

	while (head)
	{
		holder = holder->next;
		free(holder);
		head = holder;
	}
}
