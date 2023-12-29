#include <stdio.h>
/**
 * main -  prints the first 50 Fibonacci numbers, starting with 1 and 2
 *
 * Return: Always 0
 */
int main(void)
{
	int count;
	long int a, b, c;

	count = 0;
	a = 0;
	b = 1;
	while (count < 50)
	{
		printf("%ld", a + b);
		if (count < 49)
			printf(", ");
		c = b;
		b = a + b;
		a = c;
		count++;
	}
	printf("\n");
	return (0);
}
