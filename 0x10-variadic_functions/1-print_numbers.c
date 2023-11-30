#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 *print_numbers - prints a varible number of ints followed by a newline
 *@separator: the string to be printed between numbers
 *@n: the number of integers to be passed to the function
 *@...: notation for a variable numeber of arguments
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{

	va_list ptr;/* declare a va_list object */
	unsigned int i;

	va_start(ptr, n);/* init va to start ptr:start of args*/

	/* loop through arguments and print them*/
	for (i = 0; i < n; i++)
	{
		int arg = va_arg(ptr, int);/*va function to get next int arg*/

		printf("%d", arg);

		if (i < n - 1 && separator != NULL)/*if not last number and sep is !NULL*/
		{
			printf("%s", separator);
		}
	}
	va_end(ptr);/*release va*/
	printf("\n");

}
