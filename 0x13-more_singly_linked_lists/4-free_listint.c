#include "lists.h"
/**
  * free_listint - frees list
  * @head: pointer to head
 */
void free_listint(listint_t *head)
{

	while (head->next != NULL)
	{
		free(head);
		head = head->next;
	}
	free(head);
}
