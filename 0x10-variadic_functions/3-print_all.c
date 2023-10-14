#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_all -  prints anything
 * @format :	a list of types of arguments passed to the function
 *		c: char
 *		i: integer
 *		f: float
 *		s: char*(if the string is NULL, print (nil)
 *		any othere char should be ignored
 */

void print_all(const char * const format, ...)
{
	unsigned int i;/*decalare loop index*/
	const char *separator = "";/*initialize separator as an empty string*/
	va_list args;/*declare va_list object for args*/

	va_start(args, format);/*initalize va_list object to start of args*/
	while (format && format[i])/*loop through objects*/
	{
		switch (format[i])
		{
			case 'c':/*if char format specifier */
				printf("%s%c", separator, va_arg(args, int));/*print char*/
				break;
			case 'i':/*if int format specifier*/
				printf("%s%d", separator, va_arg(args, int));/*print integar*/
				break;
			case 'f':/*if float format */
				printf("%s%f", separator, va_arg(args, double));/*prints float*/
				break;
			case 's':/*if string format specifier*/

				{
					char *str = va_arg(args, char *);/*get the next string*/

					if (str == NULL)

						printf("%si (nil)", separator);/*print nil if string is NULL*/
					else
					printf("%s%s", separator, str);/*print the string*/
				}
				break;
			default:/*Ignore any other charactors in the format string*/
				break;

		}
		separator = ", ";/*update the separator to print commas between values*/
		i++;/*increase counter to move to next value*/
	}
	va_end(args);/*releases args */
	printf("\n");/*print newline*/
}
