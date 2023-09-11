#include <stdio.h>
/**
 * main -A program that prints the size of various types
 * Return: 0 (Success)
 */
int main(void)
{
	char c;
	int i;
	long int  l;
	long long int li;
	float fl;
	printf("Size of a char:%lu byte(s)\n", sizeof(c));
	printf("Size of an int:%lu byte(s)\n", sizeof(i));
	printf("Size of a long int:%lu byte(s)\n", sizeof(l));
	printf("Size of a long long int:%lu byte(s)\n", sizeof(li));
	printf("Size of a float:%lu byte(s)\n", sizeof(fl));
	return (0);
}
