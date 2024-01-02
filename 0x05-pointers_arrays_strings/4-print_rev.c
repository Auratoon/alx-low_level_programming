#include "main.h"
/**
 * print_rev - prints a string, in reverse
 * @s: string to reverse
 */

void print_rev(char *s)
{
	int i, n;

	n = 0;
	while (s[n] != '\0')
	{
		n++;
	}
	if (n > 0)
	{
		for (i = n - 1; i >= 0; i--)
		{
			_putchar(s[i]);
		}
		_putchar('\n');
	}
	else
	{
		_putchar('\n');
	}
}
