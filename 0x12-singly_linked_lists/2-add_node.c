#include "lists.h"
/**
 * add_node - adds a node to the beginning of a list
 * @head: **first node
 * @str: const char pointer
 * Return: address of new elemts or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	int slen;

	slen = 0;
	if (str == NULL)/* return if string is empty*/
		return (NULL);

	new = malloc(sizeof(list_t));/* allocate mem for new node*/
	if (new == NULL)
		return (NULL);

	/*add new node address to next of previous node*/
	if (*head == NULL)
		new->next = NULL;
	else
		new->next = *head;
	/*filling the new node*/
	new->str = strdup(str);
	new->len = strlen(str);
	*head = new;

	return (*head);
}
