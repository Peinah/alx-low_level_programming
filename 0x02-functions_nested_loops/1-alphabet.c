#include "main.h"

/**
 * print_aphabet - prints letters of the alphabet in lowercase
 *
 * Return: Always 0
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
