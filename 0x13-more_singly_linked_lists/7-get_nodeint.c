#include "lists.h"

/**
 * get_nodeint_at_index - returns the node at n
 * @head: pointer to head
 * @index: unsigned int n
 * Return: returns the pointer to the node at n
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i = 0;

	while (head != NULL)
	{
		if (i == index)
			return (head);
		head = head->next;
		i++;
	}
	return (NULL);
}
