#include "main.h"

/**
 * flip_bits - returns the number of bits you would need to flip
 * @m: the first number
 * @n: the second number
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int m, unsigned long int n)
{
	unsigned long int i = m ^ n;
	unsigned int num = 0;

	while (i != 0)
	{
		if (i & 1)
			num++;
		i >>= 1;
	}

	return (num);
}

