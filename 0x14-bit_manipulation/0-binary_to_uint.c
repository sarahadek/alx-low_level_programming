#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <math.h>
#include "main.h"

/**
 * binary_to_uint - converts a binary number to unsigned int
 * @b: string containing the binary number
 *
 * Return: the number
 */
unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int value = 0;

	if (b == NULL)
		return (0);

	for (a = 0; b[a] != '\0'; a++)
	{
		if (b[a] < '0' || b[a] > '1')
		{
			return (0);
		}
		value = 2 * value + (b[a] - '0');
	}

	return (value);
}
