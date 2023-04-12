#include "main.h"

/**
 * clear_bit-sets the value of a bit to 0 at a given index
 * @n: pointer of an unsigned int
 * @index: index of the bit
 *
 * Return: return 1 if it's tue and -1 if false
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index >= sizeof(unsigned long int) * 8)
	{
		return (-1);
	}
	*n &= ~(1UL << index);
		return (1);
}
