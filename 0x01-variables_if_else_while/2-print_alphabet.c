#include <stdio.h>
#include <ctype.h>
/**
 * main - Entry point
 *
 * Description: This the main function
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int c;

	for(c = 'A'; c <= 'Z'; c++)
	{
		putchar(tolower(c));
	}
	putchar('\n');
	return (0);
}
