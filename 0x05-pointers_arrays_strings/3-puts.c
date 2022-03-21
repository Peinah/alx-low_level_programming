#include "main.h"

/**
 * _puts -  prints a string
 * @str: string to be printed
 */
void _puts(char *str)
{
	p = str;

	while (*p != '\0')
	{
		_putchar("%c", *p++);
	}
	_putchar('\n');
}
