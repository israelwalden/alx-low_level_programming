#include <stdio.h>
#include <stdlib.h>

/**
 *array_range -creats an array
 *@min:staring int
 *@max:ending int
 *Return:pointer to newly created array
 */
int *array_range(int min, int max)
{
	int r, i;
	int *ptr;
	int range = max - min + 1;

	if (min > max)
		return (NULL);

	ptr = malloc(sizeof(int) * range);
	if (ptr == NULL)
		return (NULL);
	for (r = min, i = 0; r <= max; r++, i++)
	{
		ptr[i] = r;
	}

	return (ptr);
}
