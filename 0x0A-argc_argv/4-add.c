#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * main - suma of all interger argumants
 * @argc: number of arguments
 * @argv: char pointer to arguments
 * Return: 1 if error else 0
 */

int main(int argc, char *argv[])
{
	int sum, i;

	i = 1;
	while (i < argc)/*not zero*/
	{
		if (_digits(argv[i]))
			sum = sum + atoi(argv[i]);
		else
			{
				printf("%s\n", "Error");
				return (1);
			}
		i++;
	}
	printf("%d\n", sum);
	return (0);
}


/**
 * _digits -checks if numbers
 * @s :pointer to stirng
 * Return: returns 0 if digits else 1
 */
int _digits(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (!((s[i] >= 48) && (s[i] <= 57)))
			return (0);
	}

	return (1);
}

