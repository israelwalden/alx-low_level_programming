#include "lists.h"
/**
 * print_list - prints all elements of a list_t
 * @h: pointer to a constant of type list_h
 * Return: Number of nodes
 */
size_t print_list(const list_t *h)
{
	const list_t *p;
	int count;

	if (h != NULL)
	{
		p = h;
		count = 0;

		while (p->next != NULL)
		{
			if (p->str != NULL)
			{
				printf("[%u] %s\n", p->len, p->str);
				p = p->next;
				count++;
			}
			else
			{
				printf("[0] (nil)\n");
				p = p->next;
				count++;
			}

		}
		printf("[%u] %s\n", p->len, p->str);
		count++;
	}

	return (count);
}
