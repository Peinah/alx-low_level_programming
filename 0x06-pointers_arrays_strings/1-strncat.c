#include "main.h"
/**
 * _strncat - appends src string using utmost n bytes to dest string
 * @dest: argument of type pointer
 * @src: argument of type pointer to be appended
 * @n: bytes to be used from src
 * Return: returns a pointerbto the resulting dest string
 */
char *_strncat(char *dest, char *src, int n)
{
	int i, j;

	for (i = 0; dest[i] != '\0'; i++)

	for (j = 0; src[j] != '\0' && j < n; j++)
	{
		dest[i + j] = src[j];
	}

	dest[i + j] = '\0';
	return (dest);
}
