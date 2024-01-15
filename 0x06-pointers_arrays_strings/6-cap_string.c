#include "main.h"
/**
 * cap_string - Capitalizes all words of a string.
 * @s: The string to be capitalized.
 *
 * Return: A pointer to the changed string.
 */
char *cap_string(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ',' || s[i] == ';' || s[i] == '.' || s[i] == '!'
			|| s[i] == '?' || s[i] == '"' || s[i] == '('
		|| s[i] == ')' || s[i] == '{' || s[i] == '}')
			s[i + 1] = s[i + 1] - 32;
	}
	return (s);
}
