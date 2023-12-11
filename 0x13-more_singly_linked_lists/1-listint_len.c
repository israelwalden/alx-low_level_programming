#include "lists.h"

/**
 * listint_len - counts the number of elements ina linked list
 * @h: pointer to head
 * Return: number of nodes
 */
size_t listint_len(const listint_t *h)
{
	int n_counter = 0;

	while (h != NULL)
	{
		h = h->next;
		n_counter++;
	}
	return (n_counter);
}
