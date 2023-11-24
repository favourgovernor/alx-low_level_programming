#include "main.h"

/**
 * set_bit - sets bit value to 1 for specified index
 * @n: unsigned long int pointer
 * @index: bit index
 * Return: 1 for success, -1 for failure
 */

int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int a;

	if (index > 63)
		return (-1);

	a = 1 << index;
	*n = (*n | a);

	return (1);
}
