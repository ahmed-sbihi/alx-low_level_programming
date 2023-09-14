#include <stdio.h> /* Include the necessary header file */

/**
 * print_to_98 - Prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    while (n != 98)
    {
        printf("%d, ", n);
        if (n < 98)
            n++;
        else
            n--;
    }
    printf("98\n"); /* Print the final number and a newline */
}
