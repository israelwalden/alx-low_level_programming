#include "lists.h"
/**
 * reverse_listint - reverses the list
 * @head: pointer to *head
 * Return: returns pointer to listint_t
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL, *next = NULL;

	if (head)
	{
		while (*head)
		{
			next = *head;
			*head = (*head)->next;
			next->next = prev;
			prev = next;
		}

		*head = prev;
		return (*head);
	}
	return (NULL);
}
