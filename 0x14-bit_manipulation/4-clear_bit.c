#include "main.h"

/**
 * clear_bit - sets the value of a given bit to 0
 * @np: pointer to the number to change
 * @index: index of the bit to clear
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *np, unsigned int index)
{
	if (index > 63)
		return (-1);

	*np = (~(1UL << index) & *np);
	return (1);
}
