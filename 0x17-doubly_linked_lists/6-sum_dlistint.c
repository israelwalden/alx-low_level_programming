#include "lists.h"
/**
 * sum_dlistint - sums all n data
 * @head: head pointer
 * Return: sum or 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head == NULL)
		return (0);
	while (head->next)
	{
		sum = sum + head->n;
		head = head->next;
	}
	sum = sum + head->n;

	return (sum);
}
