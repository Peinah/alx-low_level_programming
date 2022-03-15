#include "main.h"

/**
 * print_alphabet - prints letters of the alphabet in lowercase
 */
void print_alphabet(void)
{
	char myChar;

	for (myChar = 'a'; myChar <= 'z'; myChar++)
	{
	_putchar(myChar);
	}
	_putchar('\n');
}
