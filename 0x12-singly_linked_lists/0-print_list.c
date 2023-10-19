#include <stdio.h>
#include "lists.h"

/**
* print_list - prints all the elemants ina linked list
* @h : list_t values to prints
* Return: the number of node printed
*/

size_t print_list(const list_t *h)
{
int printed = 0;/*definition of counter for nodes printed*/
/*loop through and print elements*/
while (h)/*while h is not null*/
{
/*print the value at h*/
if (!h->str)/*if element at current node is null*/
	printf("[0] (nil)\n");
else
	printf("[%u] %s\n", h->len, h->str);/*print the lenght and string at node*/
h = h->next; /*move to next node*/
printed++;/*increase counter*/

}
return (printed);
}
