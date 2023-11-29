#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"
/**
 * main -calculates based on user input
 * @argc:number of  command line args
 * @argv:pointer to command line arguments array
 * Return:returns an integer returned by get_op_func
 */

int main(int argc, char *argv[])
{
	int result;

	if (argc != 4)
	{
		printf("Error\n");
		exit(90);
	}
	if (get_op_func(argv[2]) == NULL)
	{
		printf("Error\n");
		exit(91);
	}
	if ((*argv[2] == '/' || *argv[2] == '%') && *argv[3] == 0)
	{
		printf("Error\n");
		exit(92);
	}
	result = get_op_func(argv[2])(atoi(argv[1]), atoi(argv[3]));
	printf("%d\n", result);
	return (0);
}
