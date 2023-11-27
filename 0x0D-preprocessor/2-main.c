#include <unistd.h>

int _putchar(char c);

/**
 * main - program that prints the name of file
 * Return: returns 0
 */

int main(void)
{
	int i;
	char *file_name = __FILE__;

	for (i = 0; file_name[i] != '\0'; i++)
	{
		_putchar(file_name[i]);

	}
	_putchar('\n');
	return (0);

}

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
