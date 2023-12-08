#include "lists.h"
/**
 * free_list - free a list_t list
 * @head: pointer to first node of list
 */
void free_list(list_t *head)
{
	list_t *hold;

	while (head)
	{
		hold = head;
		head = head->next;
		free(hold->str);
		free(hold);
	}
	free(head);
}
