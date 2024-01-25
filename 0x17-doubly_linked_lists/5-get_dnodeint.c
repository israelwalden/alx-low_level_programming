#include "lists.h"
/**
 * get_dnodeint_at_index - gets node at index
 * @head: head pointer
 * @index: index to get node
 * Return: NULL or node pointer
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int itr;

	itr = 0;
	while (head)
	{
		if (itr == index)
		{
			return (head);
		}
		head = head->next;
		itr++;
	}
	return (NULL);
}
