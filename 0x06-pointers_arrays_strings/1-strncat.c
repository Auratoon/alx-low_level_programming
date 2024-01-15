#include "main.h"
/**
 * *_strncat -  concatenates two strings, using at most n bytes from src
 * @dest: string to append to
 * @src: string to append
 * @n: number of bytes
 *
 * Return: a pointer to dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, len = 0;

	while (dest[len] != '\0')
		len++;
	while (i < n && src[i] != '\0')
	{
		dest[len + i] = src[i];
		i++;
	}
	dest[len + i] = '\0';
	return (dest);
}
