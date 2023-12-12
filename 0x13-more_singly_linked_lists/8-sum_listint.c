#include "lists.h"

/**
 *sum_listint - sums all data(n) in list
 * @head: pointer to head
 * Return: sum of n
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		while (head)
		{
			sum += head->n;
			head = head->next;
		}
	}

	return (sum);
}
