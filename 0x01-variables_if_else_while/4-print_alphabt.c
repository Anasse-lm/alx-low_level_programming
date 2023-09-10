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
	int c;

	for (c = 'a'; c <= 'z'; c++)
	{
		if (c != 'q' && c != 'e')
		{
			putchar(c);
		}
	}
	putchar('\n');
	return (0);
}
