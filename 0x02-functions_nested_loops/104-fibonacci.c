#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int a = 0,b = 1, c;
	int count = 0;

	while (count < 99)
	{
		printf("%ld", a + b);
		if (count < 98)
			printf(", ");
		c = b;
		b = a + b;
		a = c;
		count++;
	}
	printf("\n");
	return (0);
}
