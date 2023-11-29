#include <stdio.h>
#include "function_pointers.h"

/**
 *array_iterator -executes a function given as a parameter of an array
 *@array: int pointer to array of integers
 *@size: size_t size of array
 *@action: function pointer
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	/*loop through size executing action for each elemant in array*/
	unsigned int i;
	i = 0;

	while (i < size)
	{
		action(*array);
		i++;
		array++;
	}
}
