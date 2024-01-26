#include "lists.h"
/**
 * print_dlistint - prints the all data in list
 * @h: head pointer
 * Return: Returns size_t number of nodes
 */

size_t print_dlistint(const dlistint_t *h)
{
	size_t count = 0;
	const dlistint_t *buf;

	buf = h;
	while (buf != NULL)
	{
		printf("%d\n", buf->n);
		buf = buf->next;
		count++;
	}
	return (count);
}
