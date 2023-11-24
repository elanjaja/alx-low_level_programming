#include <stdio.h>
#include <string.h>
#include "main.h"

/**
 * binary_to_uint - converts binary number to unsigned int
 * @s: string
 * Return: Converted number || 0
 */
unsigned int binary_to_uint(const char *s)
{
	int slen = 0, i;
	unsigned int total = 0;

	if (s == NULL)
		return (0);

	while (s[slen] != '\0')
	{
		slen++;
	}
	slen -= 1;
	i = 0;

	while (s[i])
	{
		if ((s[i] != '0') && (s[i] != '1'))
		{
			return (total);
		}
		if (s[i] == '1')
		{
			total += (1 * (1 << slen));
		}
		i++;
		slen--;
	}
	return (total);
}
