#include "lists.h"

/**
 * pop_listint - delets the head node of a list
 * @head: pointer to head node
 * Return: head nodes data
 */
int pop_listint(listint_t **head)
{
	int data;
	listint_t *holder;

	if (*head == NULL)
		return (0);

	data = (*head)->n;
	holder = (*head)->next;
	free(*head);
	*head = holder;

	return (data);
}
