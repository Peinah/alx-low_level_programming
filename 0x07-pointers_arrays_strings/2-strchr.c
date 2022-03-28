#include "main.h"
#include "stddef.h"
/**
 * _strchr - return pointer to first occurent
 *  @s: string pointer
 *  @c: character in the string
 *  Return: returns NULL if character is not found
 */
char *_strchr(char *s, char c)
{
	char *ptr = s;

	while (*ptr != c)
	{
		if (!*ptr++)
		{ return (NULL);
		}
	}
	return (s);
}
