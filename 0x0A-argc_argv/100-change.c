#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints minimum number of coins to make change for an amount
 * @argc: int number of arguments
 * @argv: char pointer to arguments
 * Return: if number of arguments is not 1,return 1 else 0
 */

int main(int argc, char **argv)
{
	int amount, coins;
	
	if (argc != 2)
	{
		printf("%s\n", "Error");
		return (1);
	}

	coins = 0;
	amount = atoi(argv[1]);

	if (amount <= 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
	{
	coins += amount / 25;
	amount %= 25;

	coins += amount / 10;
	amount %= 10;

	coins += amount / 5;
	amount %= 5;

	coins += amount / 2;
	amount %= 2;

	coins += amount / 1;
	amount %= 1;

	coins += amount;

	printf("%d\n", coins);

	return (0);
	}
}
		
