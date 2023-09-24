#include "main.h"

/**
 * _isdigit - tels if this is a digit or not
 * @c: number
 * Return: 1
 * On error: 0.
 */
int _isdigit(int c)
{
	if (c <= (9 + '0') && c >= (0 + '0'))
	{
		return (1);
	}
	return (0);
}
