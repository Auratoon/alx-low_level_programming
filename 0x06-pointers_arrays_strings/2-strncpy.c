#include "main.h"
/**
 * _strncpy - copies a string
 * @dest: string to copy in
 * @src: string to copy
 * @n: max number of bytes that are copied
 *
 * Return: pointer to dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i, len = 0;

	while (dest[len] != '\0')
		len++;
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[len + i] = src[i];
	for (; i < n; i++)
		dest[len + i] = '\0';
	return (dest);
}
