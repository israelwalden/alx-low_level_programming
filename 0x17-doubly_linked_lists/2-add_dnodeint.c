#include "lists.h"
/**
 * add_dnodeint - adds a node to list
 * @head: head pointer
 * @n: int data
 * Return: address of New element or NULL
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new = malloc(sizeof(dlistint_t));
	dlistint_t *holder = *head;

	if (new == NULL)
		return (NULL);


	new->next = holder;
	new->prev = NULL;
	new->n = n;

	if (holder != NULL)
	{
		holder->prev = new;
	}
	*head = new;
	return (*head);


}
