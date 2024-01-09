#include "main.h"
/**
 * print_rev -  prints a string, in reverse, followed by a new line
 * @s: input
 */
void print_rev(char *s)
{
	int i, len = 0;

	while (s[len] != '\0')
		len++;
	for (i = len; i >= 0; i--)
		_putchar(s[i]);
	_putchar('\n');
}
