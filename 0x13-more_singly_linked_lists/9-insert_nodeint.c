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
	listint_t *new, *ptr;
	unsigned int i = 1;

	if (head)
	{
		new = malloc(sizeof(listint_t));
		if (new == NULL)
			return (NULL);

		new->n = n;
		if (idx > 0)
		{
			ptr = *head;
			while (ptr)
			{
				if (i == idx)
				{
					new->next = ptr->next;
					ptr->next = new;
					return (new);
				}
				ptr = ptr->next;
				i++;
			}
			if (idx > i)
				return (NULL);
		}
		else
		{
			new->next = *head;
			*head = new;
		}
		return (new);
	}
	return (NULL);
}
