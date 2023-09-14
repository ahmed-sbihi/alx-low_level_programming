#include <stdio.h> // Include the necessary header file

/**
 * print_to_98 - prints all natural numbers from n to 98
 * @n: The starting number
 *
 * Return: void
 */
void print_to_98(int n)
{
    if (n <= 98)
    {
        for (; n < 98; n++)
        {
            printf("%d, ", n);
        }
    }
    else
    {
        for (; n > 98; n--)
        {
            printf("%d, ", n);
        }
    }
    printf("98\n"); // Print the final number and a newline

