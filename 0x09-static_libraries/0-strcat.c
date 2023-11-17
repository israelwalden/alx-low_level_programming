#include "main.h"
/**
 *_strcat - concatenates two strings.
 *@dest: first input value
 *@src: second input value
 *Return: void
 */

char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	i = 0;
	while (dest[i] != '\0')/*while not at the end of the word*/
	{
		i++;/*increase counter*/
	}
	j = 0;
	while (src[j] != '\0')/*while not at the end of the second word*/
	{
		dest[i] = src[j];/*add current char of second word to the end of first word*/
		i++;/*increase first word counter */
		j++;/*increase second word counter*/
	}

	dest[i] = '\0';/*append NULL terminator to end of string */
	return (dest);/*return string*/
}

