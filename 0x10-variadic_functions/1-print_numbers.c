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
    va_list args;   /* Declare a va_list object to handle variable arguments */
    unsigned int i;

    va_start(args, n); /* Initialize 'args' to point to the first variable argument */

    for (i = 0; i < n; i++) /* Loop 'n' times to process each argument */
    {
        int num = va_arg(args, int); /* Get the next integer argument from 'args' */
        printf("%d", num); /* Print the integer */

        if (i < n - 1 && separator != NULL) /* If not the last number and separator is not NULL */
            printf("%s", separator); /* Print the separator */
    }

    va_end(args); /* Clean up resources associated with 'args' */
    printf("\n"); /* Print a newline character */
}

