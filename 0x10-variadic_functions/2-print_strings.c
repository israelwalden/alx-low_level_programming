#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator :  string to be printed between the strings
 * @n : number of strings passed to the function
 * ...: variable number of strings
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list args;/*declare a va_list object for vargs*/
	const char *str;/*declare a pointer to store the current sting */
	unsigned int i;/*declaration of loop index*/

	va_start(args, n);/*initalize object to the start of args*/

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, const char *);/*get the next string argument from 'args'*/
		if (str == NULL)/*if separator is NULL*/

			printf("(nil)");/*print "nil" if string is null*/
		else
			printf("%s", str);/*print string*/

		if (i < n - 1 && separator != NULL) /*if i not last string and separator*/
			/*is not NULL*/
			printf("%s", separator);/*print separator*/
	}
	va_end(args);/*release args resources*/
	printf("\n");/*print newline*/
}
