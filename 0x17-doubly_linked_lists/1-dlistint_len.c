#include "lists.h"

/**
 * dlistint_len - counts the number of elements in a list
 * @h: head pointer
 * Return:number of elements
 */
size_t dlistint_len(const dlistint_t *h)
{
	dlistint_t *cur = (dlistint_t *)h;
	size_t node = 0;

	while (cur)
	{
		node++;
		cur = cur->next;
	}
	return (node);
}

