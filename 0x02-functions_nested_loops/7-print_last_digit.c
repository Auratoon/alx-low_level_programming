#include "main.h"
/**
 * print_last_digit - prints the last digit of a number
 * @n: input
 *
 * Return: the value of the last digit
 */
int print_last_digit(int n)
{
	int m;

	m = n % 10;
	if (m < 0)
		m = -m;
	_putchar('0' + m);
	_putchar(m);
}
