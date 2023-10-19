#ifndef LIST_H
#define LIST_H

/**
 * struct lists_s - Structure for a linked list node
 * @str: String data in the node
 * @len: Length of the string
 * @next: Pointer to the next node in the list
 */
typedef struct lists_s
{
	char *str;
	unsigned int len;
	struct lists_s *next;
	} list_t;

/**
 * print_list - Prints all the elements of a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t print_list(const list_t *h);

/**
 * list_len - Returns the number of elements in a linked list
 * @h: Pointer to the head of the list
 *
 * Return: The number of nodes in the list
 */
size_t list_len(const list_t *h);

/**
 * add_node - Adds a new node at the beginning of a linked list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node(list_t **head, const char *str);

/**
 * add_node_end - Adds a new node at the end of a linked list
 * @head: Pointer to a pointer to the head of the list
 * @str: String to be added to the new node
 *
 * Return: The address of the new element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str);

/**
 * free_list - Frees a linked list
 * @head: Pointer to the head of the list
 */
void free_list(list_t *head);

#endif


