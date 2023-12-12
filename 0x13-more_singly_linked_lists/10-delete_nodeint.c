#include "lists.h"
/**
 * delete_nodeint_at_index - delete node at index
 * @head: double pointer to head
 * @index: index to delete
 * Return: 1 if success, -1 if failure
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 1;
	listint_t *ptr, *prev;

	ptr  = *head;
	if (!head || !*head)
		return (-1);

		if (index == 0)
		{
			*head = ptr->next;
			free(ptr);
			return (1);
		}


		if (index > 0)
		{
			while (ptr)
			{
				if (i == index)
				{
					prev = ptr->next;
					ptr->next = prev->next;
					free(prev);
					return (1);
				}
				i++;
				ptr = ptr->next;
			}
		}

	return (-1);
}
