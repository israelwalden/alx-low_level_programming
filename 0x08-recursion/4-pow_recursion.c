#include "main.h"

/**
 * _pow_recursion - computes x to the power y
 * @x: value to be raise
 * @y: power
 * Return: -1 if y < 0 and 1 if 0 else return power
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if(y == 0)
		return (1);

	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
