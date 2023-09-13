#include <unistd.h>

/**
 * _putchar - prints hte character c to standard output
 * @c: the character to be printed
 * Return: 1 success
 * On error,return -1  and errno is set appropiately.
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}
