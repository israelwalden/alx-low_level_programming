#include "lists.h"
/**
 * add_node - adds a node to the beginning of a list
 * @head: **first node
 * @str: const char pointer
 * Return: address of new elemts or NULL if failed
 */

list_t *add_node(list_t **head, const char *str)
{
	list_t *temp;
	int len;

	if (head != NULL && str != NULL)
	{
		len  = 0;

		while (str[len] != '\0')
			len++;

		temp = malloc(sizeof(list_t));
		if (temp == NULL)
			return (NULL);

		temp->str = strdup(str);
		temp->len = len;
		temp->next = *head;

		*head = temp;

		return (temp);
	}

	return (0);
}



