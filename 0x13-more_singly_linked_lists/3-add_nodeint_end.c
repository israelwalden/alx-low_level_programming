#include "lists.h"
/**
 * add_nodeint_end - adds a new node at the end of a list
 * @head: double pointer to head node
 * @n: int data
 * Return: returns address of new elemtent or NULL
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *holder;

	new = malloc(sizeof(listint_t));

	if (new == NULL)
		return (NULL);

	new->n  = n;
	new->next = NULL;

	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	holder = *head;
	while (holder->next != NULL)
	{
		holder = holder->next;
	}
	holder->next = new;
	return (new);
}
