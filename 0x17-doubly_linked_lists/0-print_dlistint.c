#include "lists.h"
/**
 * print_dlistint - prints the all data in list
 * @h: head pointer
 * Return: Returns size_t number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t nodes;
	const dlistint_t *cur;

	cur = h;
	nodes = 0;

	while (cur != NULL)
	{
		printf("%d\n", cur->n);
		cur = cur->next;
		nodes++;
	}
	return (nodes);
}
