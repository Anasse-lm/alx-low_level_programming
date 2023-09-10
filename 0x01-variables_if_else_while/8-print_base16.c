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
	 char i;

	for (i = 48; i < 58; i++)
	{
		putchar(i);
	}
	for (i = 'a'; i <= 'f'; i++)
	{
		putchar(i);
	}
	putchar('\n');
	return (0);
}
