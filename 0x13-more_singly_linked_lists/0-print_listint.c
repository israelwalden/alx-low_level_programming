#include "lists.h"

/**
 * print_listint - prints all elements of the list
 * @h: pointer to head
 * Return: int number of nodes
 */

size_t print_listint(const listint_t *h)
{
	int n_counter = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		n_counter++;
	}
	return (n_counter);
}

