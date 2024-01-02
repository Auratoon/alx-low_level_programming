#include "main.h"
/**
 * _strcpy - copies a string to the buffer
 * @dest: pointer to the buffer
 * @src: contains the string
 *
 * Return:  the pointer to dest
 */

char *_strcpy(char *dest, char *src)
{
	int i, n;

	n = 0;
	while (src[n] != 0)
	{
		n++;
	}
	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	dest[n] = '\0';
	return (dest);
}
