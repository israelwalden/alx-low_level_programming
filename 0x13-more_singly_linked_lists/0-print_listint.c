#include <stdio.h>
#include "lists.h"

/**
* print_listint -  prints all the elements of a listint_t list
* @h : pointer to a variable of type listint_t
* Return: the number of nodes
*/

size_t print_listint(const listint_t *h)
{
/*varaible declarations*/
size_t nodes = 0;
	/*iterator*/
while (h)
{
/*move to next*/
printf("%d\n", h->n);
h = h->next;
nodes++;/*increade node counter*/
}

return (nodes);
}
