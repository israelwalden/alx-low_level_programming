#include "lists.h"
/**
 * add_node_end - adds a new node at end of list_t
 * @head: double pointer a to avarible of list_t
 * @str: str to be added to in new node
 * Return: address of new node or NULL
 */

list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *hold;

	/*set strig length to 0 if its NULL*/
	if (str == NULL)
		return (NULL);

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);

	new->str = strdup(str);
	new->len = strlen(str);
	new->next = NULL;

	/*hold head pointer*/
	hold = *head;

	/*if hold has no addess:it is a new list*/
	if (hold == NULL)
		*head = new;
	else
	{
		while (hold->next != NULL)
			hold = hold->next;
		hold->next = new;
	}

	return (*head);

}
