#include "main.h"
/**
 * puts2 - prints every other character of a string
 * @str: string to enter
 */

void puts2(char *str)
{
	int i, c;

	c = 0;
	while (str[c] != '\0')
		c++;
	for (i = 0; i < c; i = i + 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
