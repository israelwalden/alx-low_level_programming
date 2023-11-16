#include "main.h"

/**
 * nat_root - returns the natural roots of a number
 * @n:number to test against
 * @i: iterator to test for root
 * Return: Returns the nat root, -1 if none and recalls if less
 */
int nat_root(int n, int i)
{
	if (i * i > n)
		return (-1);

	else if (i * i == n)
		return (i);

	else
		return (nat_root(n, i + 1));

}
/**
 * _sqrt_recursion - returns the natural square root of a number
 * @n: number whose square is to be computed
 * Return: Returns the square root of n else return -1 if n has no root
 */

int _sqrt_recursion(int n)
{
	return (nat_root(n, 0));
}
