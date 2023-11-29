#include <stdlib.h>
#include <stdio.h>


/**
 * main - prints the opcodes of its own main function
 * @argc: number of args passed to the function
 * @argv: array of pointers to args
 *
 * Return: always O
 */

int main(int argc, char *argv[])
{
	int numbytes;
	char *p = (char *)&main;
	int i;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}
	numbytes = atoi(argv[1]);
	if (numbytes < 0)
	{
	printf("Error\n");
	exit(2);
	}

	for (i = 0; i < numbytes; i++)
	{
		printf("%.2hhx", p[i]);
		if (i <  numbytes - 1)
			printf(" ");
	}
	printf("\n");

	return (0);
}
