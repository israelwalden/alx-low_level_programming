#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - sums all its parameters
 * @n: number of arguments passed
 * @...:ellipse operator for variable number of argumnets
 * Return: if n == 0: 0 , else sum of args.
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ptr; /*declaration of a poiner to a variabl number of arguments*/
	int sum = 0;
	unsigned int i;

	if (n == 0)
		return (0);

	va_start(ptr, n);/*init tr to the start of the first varible in argumnets*/

	/*loop through arg ad sum them*/
	for (i = 0; i < n; i++)
	{
		sum += va_arg(ptr, int);/* adds the next arg in ptr to the sum */
	}
	va_end(ptr);/*cleans up va args*/
	return (sum);

}
