#include "main.h"
#include <limits.h>
/**
 * print_last_digit - prints the last digit
 * @n: number
 * Return: int.
 */
int print_last_digit(int n)
{
	if (n > 0)
	{
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else if (n < 0)
	{
		if (n == INT_MIN)
		{
			_putchar(8 + '0');
			return (8);
		}
		n = -n;
		_putchar((n % 10) + '0');
		return (n % 10);
	}
	else
	{
		_putchar(0 + '0');
		return (0);
	}
}
