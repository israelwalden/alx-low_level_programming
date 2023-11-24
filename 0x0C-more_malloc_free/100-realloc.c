#include <stdio.h>
#include<stdlib.h>

/**
 * _realloc - reallocas memory block using malloc and free
 * @ptr:pointer to the memeory previously allocated with a call to malloc
 * @old_size: size in bytes, of the allocated space for ptr
 * @new_size:new size  in bytes of the new memory block
 * Return:pointer to new address else
 */

void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr;
	unsigned int i, n = new_size;
	char *old_ptr = ptr;

	if (ptr == NULL)
	{
		new_ptr = malloc(new_size);
		return (new_ptr);
	}
	else if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size == old_size)
		return (ptr);
	new_ptr = malloc(new_size);
	if (new_ptr == NULL)
		return (NULL);
	if (new_size > old_size)
		n = old_size;
	for (i = 0; i < n; i++)
		new_ptr[i] = old_ptr[i];
	free(ptr);
	return (new_ptr);
}
