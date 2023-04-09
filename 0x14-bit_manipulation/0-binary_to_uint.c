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
