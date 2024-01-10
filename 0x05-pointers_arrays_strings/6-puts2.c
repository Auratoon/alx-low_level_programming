#include "main.h"
/**
 * puts2 - prints every other char of a strng, starting with the first char
 * @str: input
 */
void puts2(char *str)
{
	int i, len = 0;

	while (str[len] != '\0')
		len++;
	for (i = 0; i < len; i = i + 2)
		_putchar(s[i]);
	_putchar('\n');
}
