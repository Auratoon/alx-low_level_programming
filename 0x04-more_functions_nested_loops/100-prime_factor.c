#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, prim;
	long int n = 612852475143;

	while (n % 2 == 0)
		n /= 2;
	for (i = 3; i * i <= n; i += 2)
	{
		while (n % i == 0)
			n /= i;
	}
	if (n > 2)
		prim = n;
	prim = i;
	printf("%ld\n", prim);
	return (0);
}
