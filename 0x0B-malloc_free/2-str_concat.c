#include <stdio.h>
#include <stdlib.h>
/**
 * get_len - evalautes for length of string
 * @s: ptr start of string
 * Return: returns it number of char
 */
int get_len(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

/**
 * str_concat - concats two strings
 * @s1: ptr 1st char of str 1
 * @s2: ptr to 1st char of str2
 * Return: ptr to new string or NULL
 */


char *str_concat(char *s1, char *s2)
{
	int i, j;
	int count;
	int l1;
	int l2;
	char *ptr;

	l1 = get_len(s1);
	l2 = get_len(s2);

	if (l1 == 0 || l2 == 0)
		return (0);

	ptr = (char *) malloc(sizeof(char) * (l1 + l2 + 1));
	if (ptr == 0)
		return (NULL);

	count = 0;
	for (i = 0; s1[i] != '\0'; i++)
	{
		ptr[count] = s1[i];
		count++;
	}

	for (j = 0; j < l2 + 1; j++)
	{
		ptr[count] = s2[j];
		count++;
	}
	ptr[count] = '\0';

	return (ptr);
}

