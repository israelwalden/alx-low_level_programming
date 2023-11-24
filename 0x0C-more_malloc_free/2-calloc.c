#include <stdio.h>
#include <stdlib.h>

#include "main.h"

/**
 *_calloc- allocate memory for an array using
 *@nmemb:number of array elements
 *@size: byte per element
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	/*check if nmemb and size are non-zero*/
	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);/*initialize ptr */

	if (ptr == NULL)/*if pointer fails*/
		return (NULL);
	for (i = 0; i < nmemb; i++)
	{
		ptr[i] = 0;
	}

	return (ptr);

}
