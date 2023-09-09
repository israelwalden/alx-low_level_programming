#include <stdio.h>
/**
 * main -prints all the number of lowercase alphabets in base 16.
 * Return: 0 (success)
 */
int main(void)
{
	int num;
	char letter;

	for (num = 0; num < 10; num++)
		putchar((num % 10) + '0');

	for (letter = 'a'; letter <= 'f'; letter++)
		putchar(letter);

	putchar('\n');
	return (0);
}

