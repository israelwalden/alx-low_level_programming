#include "main.h"
/**
 * clear_bit - sets the value of abit to 0
 * @n:long int to changr
 * @index: index to change
 * Return: 1 if success else 0
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	int clear;

	if (index > 53 || !n)
	{
		return (-1);
	}

	clear = 1 << index;
	*n = (*n & ~clear) |  ((0 << index) & clear);

	return (1);
}
