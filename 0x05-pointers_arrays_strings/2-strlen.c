#include "main.h"

/**
 * _strlen - returns the length of character string
 * @s: pointer string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}

	return (count);
}
