#include "main.h"
/**
 * binary_to_uint - convers binary to unsigned int
 * @b: char pointer
 * Return: return 0 if b <2,NULL if b has value > 2, else int of b
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int sum, place;
	int len;

	if (!b)
		return (0);

	for (len = 0; b[len]; len++)
		;

	len--;/*because of 0 indexing*/
	place = 1, sum = 0;
	while (len >= 0)
	{
		if (b[len]  == '0')
		{
			place *= 2;
			len--;
			continue;
		}
		else if (b[len] == '1')
		{
			sum += place;
			place *= 2;
			len--;
			continue;
		}
		else
			return (0);
	}
	return (sum);
}
