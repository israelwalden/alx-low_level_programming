#include "main.h"

/**
 * check_if_prime- evaluates if a number is a prime
 *@n: number to be checked
 *@i: iterator
 * Return: Retursn 1 if prime and 0 if not
 */
int check_if_prime(int n, int i)
{
	if (n % i == 0)
	{
		if (n == i)
			return (1);
		else
			return (0);
	}
return (check_if_prime(n, i + 1));
}

/**
  * is_prime_number- checks if a number is a prime number
  * @n: number to be evaluated
  * Return: Returns 1 if number id prime and 0 if not
  */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (check_if_prime(n, 2));
}
