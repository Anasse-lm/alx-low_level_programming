#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;

	n = 402;
	_putchar((n / 100) + '0');
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
	reset_to_98(&n);
	_putchar(((n / 10) % 10) + '0');
	_putchar((n % 10) + '0');
	_putchar('\n');
	return (0);
}
