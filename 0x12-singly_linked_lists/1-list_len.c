#include "lists.h"
/**
 * list_len - returns number of elemts ina linked list
 * @h: const pointer to  varialbe of type list_t
 * Return: returns size_t number ofelemts in the linked list
 */

size_t list_len(const list_t *h)
{
	size_t node_count = 1;

	if (h == NULL)
	{
		return (0);
	}

	while (h->next != NULL)
	{

		h = h->next;
		node_count++;
	}
	return (node_count);
}
