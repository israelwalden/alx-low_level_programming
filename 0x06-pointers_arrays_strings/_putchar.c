#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the character c to the stdout stream
 * @c: The char varaible to be printed
 * Return: success(1), error(0)
 */

ini _putchar(char c)
{
	return (write(1, &c, 1));
}
