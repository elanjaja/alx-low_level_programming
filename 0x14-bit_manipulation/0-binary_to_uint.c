#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @str: string
 * Return: Converted number || 0
 */
unsigned int binary_to_uint(const char *str)
{
	int slen = 0, i;
	unsigned int total = 0;

	if (str == NULL)
		return (0);

	while (str[slen] != '\0')
	{
		slen++;
	}
	slen -= 1;
	i = 0;

	while (str[i])
	{
		if ((str[i] != '0') && (str[i] != '1'))
		{
			return (total);
		}
		if (str[i] == '1')
		{
			total += (1 * (1 << slen));
		}
		i++;
		slen--;
	}
	return (total);
}
