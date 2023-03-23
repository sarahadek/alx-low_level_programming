#include "main.h"

/**
 * _isdigit - check if numbers are 0 - 9
 * @u: char to be checked
 *
 * Return: 0 or 1
 */

int _isdigit(int u)
{
	if (u >= '0' && u <= '9')
		return (1);
	else
		return (0);
}
