#include "main.h"
/**
 * _strlen -  returns the length of a string
 * @s: input
 *
 * Return: the length of the string
 */
int _strlen(char *s)
{
	int len = 0;

	while(s[len] != '\n')
		len++;
	return (len);
}
