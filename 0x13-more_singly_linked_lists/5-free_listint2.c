#include "lists.h"

/**
  * free_listint2- fress a list and sets head to NULL
  * @head: doible poiter to head
  */
void free_listint2(listint_t **head)
{
	listint_t *holder;

	if (head)
	{
		while (*head != NULL)
		{
			holder = *head;
			*head = (*head)->next;
			free(holder);
		}
	}
	else
		return;

	free(*head);
	*head = NULL;
}
