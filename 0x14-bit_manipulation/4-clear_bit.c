#include "main.h"

/**
 * clear_bit - set value of  bit to 0 at a given index
 * @n: pointer of unsigned long int
 * @index:indexof the int
 *
 * Return: 1 if it worked and -1 if it didn't
 *
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;

	if (*n & m)
		*n ^= m;

	return (1);
}
