/**
 * _islower - checks if the alphabet is lower
 *
 * Description: this is islower function
 *
 * Return: On success 1.
 * On error: returns 0.
 */
int _islower(int c)
{
	if (c > 'a' - 1 && c < 'z' + 1)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
