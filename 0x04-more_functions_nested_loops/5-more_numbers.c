#include "main.h"

/**
 * more_numbers - print 0 - 14 ten times and you
 * can only use _putchar three times
 *
 * Return: Always 0 (Success)
 */
void more_numbers(void)
{
	int num, row, count; /* Use tabs for indentation */

	for (row = 1; row <= 10; row++) /* Use tabs for indentation */
	{
		for (count = 0; count <= 14; count++) /* Use tabs for indentation */
		{
			num = count;
			if (count > 9)
			{
				_putchar(1 + 48); /* Replace C99 // comments with C-style comments */
				num = count % 10;
			}
			_putchar(num + 48); /* Replace C99 // comments with C-style comments */
		}
		_putchar('\n'); /* Replace C99 // comments with C-style comments */
	}
}
