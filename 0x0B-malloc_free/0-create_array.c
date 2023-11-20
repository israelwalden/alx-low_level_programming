#include <stdio.h>
#include <stdlib.h>

/**
 * create_array - creats an array of chars
 * and inititializes it with a specific character
 * @size: unisigned it size of array
 * @c: char to initialize
 * Return: returns a pointer to the array or NULL
 */


char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int i;

	i = 0;

	if (size > 0)
	{
		/* allocate memory for array of size*/
		ptr = malloc(sizeof(char) * size);
		size--;

		while (i < size)
		{
			ptr[i] = c;
			i++;
		}
	return (ptr);
	}
	else
		return (NULL);
}
