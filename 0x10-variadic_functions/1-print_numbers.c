#include "variadic_functions.h"
#include <stdio.h>  /* Include standard input/output header file */
#include <stdarg.h> /* Include header file for handling variable arguments */

/**
 * print_numbers - Prints a variable number of integers followed by a newline
 * @separator: The string to be printed between numbers
 * @n: The number of integers passed to the function
 * @...: The variable number of integers
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ptr; /*Declare a va_list object to handle the varible n*/
	unsigned int i;/*Declare an unsigned int i*/

	va_start(ptr, n);/*va function to point ptr to the first value of n*/

for (i = 0; i < n ; i++)/*loops n time through argumnets*/
	{
	int a = va_arg(ptr, int);/*va function to get next integar argument*/

	printf("%d", a);/*print the interger*/
	if (i < n - 1 && separator != NULL)/*if not last number and seperat not NULL*/
		printf("%s", separator);/*Print the separator*/
	}
va_end(ptr);/*release n resources*/
printf("\n");/*print newline*/
}
