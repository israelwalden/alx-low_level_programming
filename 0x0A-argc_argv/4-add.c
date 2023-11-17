#include <stdio.h>
#include <stdlib.h>

/**
 * main - suma of all interger argumants
 * @argc: number of arguments
 * @argv: char pointer to arguments
 * Return: 0
 */

int main(int argc, char *argv[])
{
	int sum;

	while (argc--)/*not zero*/
	{
		sum = sum  + atoi(*argv++);
	}
	printf("%d\n", sum);

return (0);

}
