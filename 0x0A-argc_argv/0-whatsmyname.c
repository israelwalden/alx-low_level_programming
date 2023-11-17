#include <stdio.h>
#include "main.h"

/**
 * main - print its own name
 * @argc: int number of argumants
 * @argv: char variable arguments
 * Return: 0
 */
int main(int argc, char *argv[])
{
	(void) argc;

	printf("%s\n", argv[0]);
	return (0);

}
