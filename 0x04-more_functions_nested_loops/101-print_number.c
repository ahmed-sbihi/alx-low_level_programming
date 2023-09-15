#include "main.h"

/**
 * print_number - Prints an integer.
 * @n: The integer to be printed.
 */
void print_number(int n)
{
    int sign = 1;
    unsigned int num;

    if (n < 0)
    {
        _putchar('-');
        sign = -1;
        num = -n;
    }
    else
    {
        num = n;
    }

    if (num / 10)
        print_number(num / 10);

    _putchar(num % 10 + '0');
}
