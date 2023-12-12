#include "lists.h"
/**
 * print_listint_safe -prints linked list
 * @head: pointer to head
 * Return: returns numbet of nodes in list
 */
size_t print_listint_safe(const listint_t *head)
{
	const listint_t *temp_n = NULL;
	const listint_t *last_n = NULL;
	size_t counter = 0;
	size_t new_n;

	temp_n = head;
	while (temp_n)
	{
		printf("[%p] %d\n", (void *)temp_n, temp_n->n);
		counter++;
		temp_n = temp_n->next;
		last_n = head;
		new_n = 0;
		while (new_n < counter)
		{
			if (temp_n == last_n)
			{
				printf("-> [%p] %d\n", (void *)temp_n, temp_n->n);
				return (counter);
			}
			last_n = last_n->next;
			new_n++;
		}
		if (!head)
			exit(98);
	}
	return (counter);
}
