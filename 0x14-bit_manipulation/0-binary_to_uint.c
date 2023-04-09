#include "main.h"

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b: pointer to a string containing a binary number
 *
 * Return: the converted number as an unsigned int, or 0 if there is one or
 * more chars in the string b that is not 0 or 1, or if b is NULL
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
	{
		return (0);
	}
	for (; *b != '\0'; b++)
	{
		if (*b == '0' || *b == '1')
		{
			i = i * 2 + (*b - '0');
		}
		else
		{
			return (0);
		}
	}

	return (i);
}
