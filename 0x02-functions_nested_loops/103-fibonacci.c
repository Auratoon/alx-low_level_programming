#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a, b, c, sum;

	sum = 0;
	a = 0;
	b = 1;
	while (a + b < 4000000)
	{
		if (a + b % 2 == 0)
			sum += (a + b);
		c = b;
		b = a + b;
		a = c;
	}
	printf("%ld\n", sum);
	return (0);
}
