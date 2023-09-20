#include "main.h"

/**
 * print_sign - prints numbers sign
 * @n: the number
 * Return: 1 positif, 0 zero, -1 negatif.
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar('0');
		return (0);
	}
}
