#include "lists.h"
/**
 * insert_dnodeint_at_index - inserts node at index
 * @h : ponter to head pointer
 * @idx : indext to insert node
 * @n : data
 * Return: NULL or node pointer
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *new, *head, *old;
	unsigned int itr = 0;

	head = *h;
	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	new->n = n;
	if (head == NULL)
	{
		new->prev = NULL;
		new->next = NULL;
		head = new;
		return (new);
	}

	while (head)
	{
		if (itr == idx)
		{
			new->prev = old;
			new->next = old->next;
			old->next = new;
			return (new);
		}
		itr++;
		old = head;
		head = head->next;

	}
	return (NULL);
}
