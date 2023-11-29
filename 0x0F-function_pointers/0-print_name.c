#include <stdio.h>
#include "function_pointers.h"

/**
 *print_name - print names
 *@name: char pointer to name
 *@f: function pointer to a function that returns void
 *     and takes a char pointer
 */

void print_name(char *name, void (*f)(char *))
{
	/*if there are args for name and f*/
	if (name != NULL && f != NULL)
	{
		f(name++);
	}
}
