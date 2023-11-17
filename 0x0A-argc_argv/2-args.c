#include <stdio.h>

/**
 * main - print everyr argument passed and newline
 * @argc: int number of arguments passed
 * @argv: char pointer to start of argumants passed
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int i = 0;	
	
	while (i == 0 || i < argc)/*decremants until 0 */
	{
		printf("%s\n", argv[i]);
		i++;
	}

	return (0);
}
