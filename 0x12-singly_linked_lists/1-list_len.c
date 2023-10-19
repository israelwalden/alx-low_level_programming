#include <stdio.h>
#include "lists.h"

/**
* list_len - return the number of in a list
* @h : list of values
* Return: number of nodes
*/
size_t list_len(const list_t *h)
{
size_t c = 0;
while (h)
{
h = h->next;
c++;
}
return (c);
}
