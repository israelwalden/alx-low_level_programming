#include "main.h"
/**
 * get_bit - returns the value of a bit a  givrn index
 * @n: int to search
 * @index: indec to return
 * Return: return the value of the bit at index
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index > 53)
		return (-1);

	return ((n >> index) & 1);

}
