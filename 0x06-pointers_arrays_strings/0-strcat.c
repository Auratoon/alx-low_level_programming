#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: string to append to
 * @src: string to append
 *
 * Return: a pointer to dest
 */
char *_strcat(char *dest, char *src)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; src[i] != '\0'; i++)
		dest[len + i] = src[i];
	dest[len + i] = '\0';
	return (dest);
}
