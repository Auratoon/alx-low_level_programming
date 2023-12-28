#include <stdio.h>
/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: number to start counting from
 */
void print_to_98(int n)
{
	int i;

	for (i = n; i < 99; i++)
	{
		if (i < 98)
		{
			printf(", ");
		}
		printf("\n");
	}
}
