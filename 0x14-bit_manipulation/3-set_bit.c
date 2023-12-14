#include "main.h"
/**
 * set_bit - sets the value of a bit to 1
 * @n: long int to change
 * @index: index to change
 * Return: return 1 if success else -1
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 53 || !n)
		return (-1);

	(*n |= 1 << index);
	return (1);
}
