#include "main.h"

/**
 * _strchr - Locates a charactetr in a string
 * @s: The string to be searched
 * @c: The character to be located
 *
 * Return: If c i found - a pointer to the first occcurence
 * If c is not found - NULL
 */

char *_strchr(char *s, char c)
{
	int index;

	for (index = 0; s[index] >= '\0'; index++)
	{
		if (s[index] == c)
			return (s + index);
	}

	return ('\0');
}
