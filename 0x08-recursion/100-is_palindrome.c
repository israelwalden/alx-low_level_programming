#include "main.h"

/**
 * _strlen_recursion- returns the lenght of a string
 * @s: char string parameter
 * Return: returns integer length of sring
 */
int _strlen_recursion(char *s)
{
	if (*s != '\0')
	{
		return (_strlen_recursion(s + 1) + 1);
	}
	return (0);
}

/**
 * is_same - checks if a string is same
 * @i: int
 * @s: pointer to a string
 * @len: length of the string
 * Return: 1 if palenindrome and 0 if not
 */
int is_same(int i, char *s, int len)
{
	if (*s == '\0')
	{
		return (1);
	}

	if (i == (len / 2))
	{
		return (1);
	}

	if (s[i] != s[(len - 1) - i])
	{
		return (0);
	}

	else
	{
		return (is_same(i + 1, s, len));
	}
}


/**
 * is_palindrome - checks if a string is a palindrome
 * @s: pointer to a string
 * Return: returns 1 if palindrome and 0 if not
 */
int is_palindrome(char *s)
{
	int l;

	l = _strlen_recursion(s);
	return (is_same(0, s, l));
}
