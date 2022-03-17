#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 14, 10 times
 * Description: You can only use _putchar thrice
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i)
			while (i < 14)
			{
				_putchar(i + '0');
				i++;
			}
	}
	_putchar('\n');
}
