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

	if (n < 0)
		m = -n;
	else
		m = n;
	_putchar('0' + m % 10);
	return (m % 10);
}
