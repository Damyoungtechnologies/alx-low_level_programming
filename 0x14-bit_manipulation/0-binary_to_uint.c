#include "main.h"

/**
 * binary_to_uint - function converts a binary number.
 * @b: pointer to a string containing a binary number
 * Return: unsigned int number, or 0 if error
 */
unsigned int binary_to_uint(const char *b)
{
	int x;
	unsigned int num;

	num = 0;
	if (b == NULL)
		return (0);
	for (x = 0; b[x] != '\0'; x++)
	{
		if (b[x] != '0' && b[x] != '1')
			return (0);
	}
	for (x = 0; b[x] != '\0'; x++)
	{
		num <<= 1;
		if (b[x] == '1')
			num += 1;
	}
	return (num);
}

