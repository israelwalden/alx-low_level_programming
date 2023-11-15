#include "main.h"

/**
 * _strlen_recursion- returns the lenght of a string
 * @s: char string parameter
 * Return: returns integer length of sring
 */

int _strlen_recursion(char *s)
{

	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}
