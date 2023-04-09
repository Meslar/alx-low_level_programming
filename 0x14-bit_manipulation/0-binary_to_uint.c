#include "main.h"
#include <stddef.h>

/**
 * binary_to_uint - converts a binary number to an unsigned int.
 * @b - pointer to a string of binary characters.
 *
 * Return - the converted decimal number or 0 if error.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int i = 0;

	if (!b)
	{
		return (0);
	}
	while (*b)
	{
		if (*b == 0)
		{
			i <<= 1;
		}
		else if (*b == 1)
		{
			i <<= 1 | 1;
		}
		else
		{
			return (0);
		}
		b++;
	}
	return (i);
}
