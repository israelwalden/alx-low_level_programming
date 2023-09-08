#include <stdio.h>

/**
 * main -print last digit of n
 * Return: 0 (success)
 */

int main(void)
{
	char l_alphabet = 'a';
	char u_alphabet = 'A';

	while (l_alphabet <= 'z')
	{
	putchar(l_alphabet);
	l_alphabet++;
	}
	while (u_alphabet <= 'Z')
	{
	putchar(u_alphabet);
	u_alphabet++;
	}
	putchar('\n');

	return (0);


}
