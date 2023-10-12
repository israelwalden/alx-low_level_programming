#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - Returns the sum of all it arguments.
 * @n: Number od argumrnts passed.
 * @...: ellipse operator for variable number of args.
 * Return: if n == 0 ,0 else sum of args.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ptr;/*declaration of pointer of type va_list*/
	int sum = 0;
	unsigned int i = 0;

	va_start(ptr, n);/* initialises ptr to point to the first varable arg of n */

	for (i = 0; i < n ; i++)/*Loop n times to process each argument*/
	{
		sum += va_arg(ptr, int);/*adds the next arg in ptr to sum */
	}
	va_end(ptr);/* clean up va args*/
	return (sum);/*Returns the sum */
}

