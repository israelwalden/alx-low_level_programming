#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - allocates memory using malloc
 * @b: integer number of space to allocate
 * Return: exit if fail else pointer
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;/*declare a void pointer*/

	ptr = malloc(b);/*init a ponter malloc*/

	if (ptr == NULL)/*if ptr is null(mallock failed)*/
		exit(98);/*terminate with 98*/

	return (ptr);
}
