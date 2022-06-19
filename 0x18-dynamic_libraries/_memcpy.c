#include "main.h"
/**
 * _memcpy - copies n bytes from src to dest
 * @dest: receives n bytes
 * @src: contains n bytes
 * Return: returns a pointer to dest
 * @n: number of bytes
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}
