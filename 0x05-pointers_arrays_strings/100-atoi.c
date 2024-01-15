#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: input
 *
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i, res = 0, sign = 1;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= '0' && s[0] <= '9')
			sign = 1;
		if (s[i] == '-' && s[i + 1] >= '0' && s[i + 1] <= '9')
			sign = -1;
		if (s[i] >= '0' && s[i] <= '9')
			res = res * 10 + (s[i] - '0');
		if (s[i] >= '0' && s[i] <= '9' && (s[i + 1] < '0' || s[i + 1] > '9'))
				break;
	}
	return (sign * res);
}
