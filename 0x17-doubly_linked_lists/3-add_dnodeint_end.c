#include "lists.h"
/**
 * add_dnodeint_end - add node at end
 * @head: head pointer
 * @n: int data
 * Return: NULL, or pointer to new element
 */

dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *holder = *head;
	dlistint_t *new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	new->prev = NULL;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}

	/*traverse to end*/
	while (holder->next)
	{
		holder = holder->next;
	}
	/* fill node */
	holder->next = new;
	new->prev = holder;

	return (new);
}
