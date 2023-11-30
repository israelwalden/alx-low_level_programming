#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * print_strings - printss strings followed by a new line
 * @separator: string that sparates string
 * @n: int number of variable
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;/*declare a va object*/
	const char *str;/* declare a pointer to current string*/
	unsigned int i;

	va_start(args, n);/*init va object to start of arguments*/

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);/*va func thats get next string*/
		if (str == NULL)
			printf("(nil)");/*print nil if str is empty*/
		else
			printf("%s", str);/*print string*/
		if (i < n - 1 && separator != NULL)/*if i is not last string*/
			printf("%s", separator);/*print separator*/
	}
	va_end(args);/*release va resources*/
	printf("\n");
}
