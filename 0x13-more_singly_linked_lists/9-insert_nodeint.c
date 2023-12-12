#include "lists.h"

/**
 * insert_nodeint_at_index - inserta a new node
 * @head: head pointer of list
 * @idx:int index to insert
 * @n: data to insert
 * Return: return address of new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *ptr, *new, *holder;

	new = NULL;
	if (head)
	{
		new = malloc(sizeof(listint_t));

		if (new == NULL)
			return (NULL);

		new->n = n;
		ptr = *head;
		while (ptr)
		{
			if (i == idx)
			{
				holder = ptr->next;
				new->next = holder;
				return (new);
			}
			ptr = ptr->next;
			i++;
			if (i > idx)
				return (NULL);
		}
	}

	else
	{
		*head = new;
		new->next = NULL;
		return (new);
	}
	return (NULL);
}
