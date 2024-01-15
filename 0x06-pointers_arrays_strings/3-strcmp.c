#include "main.h"
/**
 * _strcmp- compares two strings
 * @s1: first string
 * @s2: second string
 * Return: returns an integer less than, equal to, or greater than zero if
 * s1 is found, respectively, to be less than, to match, or be greater than s2
 */
int _strcmp(char *s1, char *s2)
{
	int i, j, diff = 0;

	for (i = 0; s1[i] != '\0'; i++)
	{
		for (j = 0; s1[j] != '\0'; j++)
		{
			if (s1[i] != s2[j])
			{
				diff = s2[j] - s1[i];
				break;
			}
			else
			{
				return (0);
			}
		}
	}
	return (diff);
}
