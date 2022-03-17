#include "main.h"

/**
 * more_numbers - print the numbers from 0 to 9
 * Description: You can only use _putchar twice
 */
void more_numbers(void)
{
	int i;

	i = 0;
	while (i < 10)
	{
		_putchar(i + '0');
		i++;
	}

	return (i != 2 && i != 4);

	_putchar('\n');
}
