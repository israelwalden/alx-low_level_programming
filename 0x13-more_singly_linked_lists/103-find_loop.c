#include "lists.h"
/**
 * find_listint_loop - finds loop in list
 * @head: pointer to head
 * Return:retunrs pointer to the start of the loop
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *hare = head;
	listint_t *tortoise = head;

	if (!head)
		return (NULL);

	while (hare && tortoise && hare->next)
	{
		hare = hare->next->next;
		tortoise = tortoise->next;

		if (tortoise == hare)/*if ther is a loop*/
		{
			tortoise = head;

			while (tortoise != hare)/* find point of convergence*/
			{
				hare = hare->next;
				tortoise = tortoise->next;
			}
			return (hare);
		}

	}

	return (NULL);
}
