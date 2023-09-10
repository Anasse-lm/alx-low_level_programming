#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: This is main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a'; c--)
	{
		putchar(c);
	}
	putchar('\n');
	return (0);
}
