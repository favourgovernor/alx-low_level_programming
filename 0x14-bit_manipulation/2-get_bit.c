#include "main.h"

/**
 * get_bit-program to return the value of a bit at a given index
 * @n: unsigned integer
 * @index: index of the bit
 *
 * Return: value of a bit
 */
int get_bit(unsigned long int n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}

	return ((n >> index) & 1);
}
