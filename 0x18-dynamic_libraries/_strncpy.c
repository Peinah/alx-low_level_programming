#include "main.h"
/**
 * _strncpy - function to copy string from source to a destination buffer.
 * @dest: Pointer to destination array where content is to be copied.
 * @src: Pointer to source string which will be copied
 * @n: The first n character copied from src to dest
 * Return: returns a pointer to the destination string
 */
char *_strncpy(char *dest, char *src, int n)
{

	int i;

	i = 0;

	while (src[i] && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
