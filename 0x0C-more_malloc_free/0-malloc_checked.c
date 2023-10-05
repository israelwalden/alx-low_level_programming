#include <stdlib.h>
#include "main.h"

/**
 * *malloc_checked - allocates memory
 * @b : number of bytes to allocate
 *Returns: a pointer to the allocated memory
 */
void *malloc_checked(unsigned int b)
{
	void *ptr;/*pointer declaration*/

	ptr = malloc(b);/*pointer initialized to address withb size*/
	if (ptr == NULL)/*check if pointer is empty*/
		exit(98);/*exit if empty*/
	return (ptr);/*otherwise return address*/
}
