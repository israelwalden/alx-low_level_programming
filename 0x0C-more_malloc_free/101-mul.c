#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/*
 * _isNumber - Define if a string is a number.
 * @argv: Pointer to string.
 * Return: success (0).
 */
int _isNumber(char *argv)
{
	int i;

	for (i = 0; argv[i]; i++)
		if (argv[i] < 48 || argv[i] > 57)
			return (1);
	return (0);
}
/**
 * _atoi_digit - convert a char to integer.
 * @x: character to convert.
 * Return: integer.
 **/

int _atoi_digit(char x)
{
	unsigned int res;

	if (x <= '9' && x >= '0')
		res = x - '0';
	return (res);
}

int main(argc, *argv[])
{
	int i = 0, resut = 0;

	if (argc > 3)
	{
		_putchar("Error\n");
		exit(98);
	}
	for (i = 2; i < argc; i++)
	{
		result = result + _atoi_digit(argv[i]);
	}
return (0);
}
