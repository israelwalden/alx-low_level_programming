#include <stdio.h>
#include <stdlib.h>

/**
 * main - print the multiplication of two numbers
 * @argc: number of arguments
 * @argv: pointer to char
 * Return: 0
 */

int main(int argc, char *argv[])
{
	if (argc == 3)
	{
		int n1, n2, prod;

		n1 = atoi(argv[1]);
		n2 = atoi(argv[2]);

		prod = n1 * n2;
		printf("%d\n", prod);
	}
	else
		printf("%s\n", "Error");

	return (0);
}
