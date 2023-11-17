#include <stdio.h>

/**
 * main -prints the number of argumants passed
 * @argc: number of argumants passed
 * @argv: char pointer to start of argumants passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	(void) argv;

	printf("%d\n", argc - 1);
	return (0);
}
