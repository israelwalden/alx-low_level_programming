#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * string_nconcat - contcats two strings
 * @s1: pointer to start of 1st string
 * @s2: pointer to start of 2nd string
 * @n: int s2 limit
 * Return: returns a pointer to start of the newlly concat string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int i, i1, i2, l1, l2, n_len;
	char *n_string;

	l1 = l2 = i1 = i2 = i = 0;
	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}
	while (s1[l1] != '\0')
	{
		l1++;
	}
	while (s2[l2] != '\0')
	{
		l2++;
	}
	if (n >= l2)
		n_len = l1 + l2 + 1;
	else
		n_len = l1 + n + 1;
	/*create new address*/
	n_string = malloc(sizeof(char) * n_len);
	if (n_string == NULL)
		return (NULL);
	/*fill new address*/
	while (s1[i1] != '\0')
	{
		n_string[i] = s1[i1];
		i++;
		i1++;
	}
	while (i2 < n && s2[i2] != '\0')
	{
		n_string[i] = s2[i2];
		i++;
		i2++;
	}
	n_string[i] = '\0';
	return (n_string);
}
