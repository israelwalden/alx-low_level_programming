#include <stdio.h>
#include <unistd.h>
/**
 * main -print last digit of n
 * Return: 0 (success)
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar(a + '0');
	}
	putchar('\n');
	return (0);
}

