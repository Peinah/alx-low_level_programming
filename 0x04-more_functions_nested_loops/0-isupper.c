#include "main.h"

/**
 * _isupper - checks for uppercase letter
 * @c: character to check
 * Return: 1 if c is lowercase and 0 if not
 */
int _isupper(int c)
{
	if (c > 'a' && c <= 'Z')
		return (1);

	return (0);
}
