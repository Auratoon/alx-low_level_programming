#include <stdio.h>
#include <math.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, j, prim;
	int count = 0;
	long int n = 612852475143;

	for (i = 2; i <= sqrt(n); i++)
	{
		if (n % i == 0)
		{
			for (j = 2; j < i; j++)
			{
				if (i % j == 0)
					count += 1;
			}
			if (count == 0)
				prim = i;
		}
		count = 0;
	}
	printf("%ld\n", prim);
	return (0);
}
