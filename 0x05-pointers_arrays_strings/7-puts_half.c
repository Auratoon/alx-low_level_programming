#include "main.h"
/**
 * puts_half -  prints half of a string
 * @str: string to enter
 */

void puts_half(char *str)
{
	int i, n;

	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	if (n == 0)
	{
		_putchar('\n');
	}
	else if ((n - 1) % 2 == 0)
	{
		for (i = (n + 1) / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
	else
	{
		for (i = (n + 1) / 2; i < n; i++)
		{
			_putchar(str[i]);
		}
		_putchar('\n');
	}
}
