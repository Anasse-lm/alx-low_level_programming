#include <stdio.h>

/**
 * main - entry point
 * Return: 0.
 */
int main(void)
{
	long int fib[50], i;

	fib[0] = 1;
	fib[1] = 2;
	for (i = 2; i < 50; i++)
	{
		fib[i] = fib[i - 1] + fib[i - 2];
	}
	for (i = 0; i < 49; i++)
	{
		printf("%ld, ", fib[i]);
	}
	printf("%ld\n", fib[49]);
	return (0);
}
