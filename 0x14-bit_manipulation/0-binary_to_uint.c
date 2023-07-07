#include "main.h"

/**
 * binary_to_uint - converts binary number to an unsigned int.
 * @b:binary number.
 * Return: unsigned integer.
 */

unsigned int binary_to_uint(const char *b)
{
	unsigned int result = 0;
	int length = strlen(b);
	int i;

	if (b == NULL)
		return (0);

	for (i = 0; i < length; i++)
	{
		if (b[i] == '0')
			result = result << 1;
		else if (b[i] == '1')
		result = (result << 1) | 1;
		else
			return (0);
	}

		return (result);
}
