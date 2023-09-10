#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: this is main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int cLower, cUpper;

	for (cLower = 'a'; cLower <= 'z'; cLower++)
	{
		putchar(cLower);
	}
	for (cUpper = 'A'; cUpper <= 'Z'; cUpper++)
	{
		putchar(cUpper);
	}
	putchar('\n');
	return (0);
}
