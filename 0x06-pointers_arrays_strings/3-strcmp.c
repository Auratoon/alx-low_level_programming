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
	int i = 0, diff = 0;

	do {
		diff = s1[i] - s2[i];
		i++;
	} while (s1[i] == s2[i] && s1[i] != '\0' && s2[i] != '\0');
	return (diff);
}
