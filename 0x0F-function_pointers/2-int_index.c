#include <stdio.h>
#include "function_pointers.h"

/**
 * int_index - searches for an integer
 * @array: int pointer to array
 * @size: size of array
 * @cmp: function pointer to a function that takes an it
 * Return: return 0 if size > 0 , 1 if function does not return and
 * -i if elements do not match.
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0 || array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
		return (i);
	}
	return (-1);

}
