#include "main.h"
/**
 * _atoi -  convert a string to an integer
 * @s: input
 *
 * Return: integer converted
 */
int _atoi(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] >= '0' && s[i] <= '9')
		{
			if (i - 1 >= 0 && s[i - 1] == '-')
				return (-s[i]);
			else
				return (s[i]);
			break;
		}
	}
	if (s[i] == '\0')
		return (0);
}
