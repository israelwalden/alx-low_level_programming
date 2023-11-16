#include "main.h"

/**
 * factorial - prints the facatorial of a given number.
 * @n: integer number to be factored
 * Return: Returns 0 if n < 0 ,-1 fact of 0 is 1
 */

int factorial(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	else
		return (n * factorial(n - 1));

}
