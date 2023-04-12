#include "main.h"

/**
 * flip_bits - returns the no. of bit needed to be flipped.
 * @n: at first position.
 * @m: at second position
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned int count;

	for (count = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			count++;
	}

	return (count);
}
