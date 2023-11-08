#include <stdlib.h>
#include <string.h>

/**
* add_node_end - adds a new node at the end of a linked list list_t
* @head: starting point of the linked list
* @str : string to be duplicated
* Return: return theaddress or NUll if failed
*/

list_t *add_node_end(list_t **head, const char *str)
{
list_t *new_node;
list_t *holder;
unsigned int length = 0;

while (str[length])
length++;

new_node = malloc(sizeof(list_t));/*allocate momory for new node*/
if(!new_node)
	return (NULL);
new_node->str = strdpub(str);
new_node->len = length;
new_mode->next = NULL;

if(*head == NULL)
{
*head = new_node ;
return(new_node)
}


while (holder->next)
	temp = temp->next;
holder = holder->next;
return (*new_node);

}
