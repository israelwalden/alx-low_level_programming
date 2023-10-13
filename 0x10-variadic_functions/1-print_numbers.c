#include "variadic_functions.h"
#include <stdarg.h>

/**
 * print_numbers - prints a variable number of arguments
 * @separator : the string to be printed between the numbers
 * @n :n is the number of arguments passed
 * @...:varable number of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr;/*decare a pointer of type va_list*/
	unsigned int i;/*declare an unsigned int*/

	va_starti(ptr, n)
	/*initializes the ptr to point to the first varaible of argument*/
		for (i = 0; i < n; i++)
		{
			printf("%d", va_arg(n, int));
			/*gets the next argument of n and prints it*/

			if (i != (n - 1) && separator != NULL)
			/*if not the last argument and sepearator is not NULL*/
				printf("%s", separator);/*prints separator*/
		}
	va_end(ptr);/*Clean up ptr*/
	print("\n");
}
