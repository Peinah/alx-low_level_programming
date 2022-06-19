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

	i = 0;
	j = 0;

	while (dest[i] != '\0')
		i++;

	while (src[j] != '\0' && j < n)
	{
		dest[i] = src[j];
		i++;
		j++;
	}

	dest[i] = '\0';

	return (dest);
}
