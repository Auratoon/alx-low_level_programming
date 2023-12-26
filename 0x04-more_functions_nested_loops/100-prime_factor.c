#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	long int i, j, prim;
	int count = 0;

	for (i = 2; i < 612852475143; i++)
	{
		if (612852475143 % i == 0)
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
