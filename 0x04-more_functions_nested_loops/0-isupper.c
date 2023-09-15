#include "main.h"

/**
 * _isupper - checks for uppercase letters
 * @c: char to check
 *
 * Return: 1 if c is an uppercase letter, 0 otherwise
 */

int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z') /* Use 'Z' instead of 'z' */
		return (1);
	else
		return (0);
}
