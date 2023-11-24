#include <stdio.h>
#include <stdlib.h>
#include "main.h"


char *fill_mem(char *s, char fill, unsigned int size);
/**
 *_calloc- allocate memory for an array using
 *@nmemb:number of array elements
 *@size: byte per element
 *Return: pointer to allocated memory
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;

	if (nmemb == 0 || size == 0)
		return (NULL);

	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	fill_mem(p, 0, nmemb * size);

	return (p);
}

/**
 * fill_mem- fill memory with char
 * @s: pointer to string
 * @b: char to fill
 * @n:integer number of char
 * Return: pointer
 */
char *fill_mem(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		s[i] = b;
	return (s);
}
