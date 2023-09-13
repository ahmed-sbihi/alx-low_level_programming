#include "main.h"

/**
 * _islower - Checks for lowercase character.
 * @c: The character to check.
 *
 * Return: 1 if c is lowercase, 0 otherwise.
 */
int _islower(int c)
{
    if (c >= 'a' && c <= 'z')
        return 1; // It's a lowercase character
    else
        return 0; // It's not a lowercase character
}
