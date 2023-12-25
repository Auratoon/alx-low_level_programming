#include "main.h"
/**
 * print_diagonal -  draws a diagonal line on the terminal
 * @n:  the number of times the character \ should be printed
 */
void print_diagonal(int n)
{
	int l, c;

	if (n > 0)
	{
		for (l = 0; l < n; l++)
		{
			for (c = 0; c < l; c++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
