#include <stdio.h>
/**
 * main -print last digit of n
 * Return: 0 (success)
 */
int main(void)
{
	char alphabet = 'a';

	while (alphabet != 'q' || alphabet != 'e')
	{
	putchar(alphabet);
	alphabet++;
	}
	putchar('\n');
	return (0);
}
