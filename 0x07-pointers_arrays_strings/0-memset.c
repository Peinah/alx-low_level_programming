#include "main.h"
/**
 * _memset - fills memory with constant byte
 * @s: starting address of memory
 * @b: value to be filled
 * @n: number of bytes starting from s
 * Return: returns a pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *ptr = s;

	while (n--)
	{
		*ptr++ = b;
	}
	return (s);
}
