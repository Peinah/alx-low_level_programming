#include "main.h"
/**
 * _strcat - appends src string to dest string
 * dest - argument of type pointer 
 * src: pointerto concatenate
 * Return: returns a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	char *start = dest;

	while (*dest != '\0')
	{
		dest++;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (start);
}
