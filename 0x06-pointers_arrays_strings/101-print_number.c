#include "main.h"

/**
 * print_number - prints an integer.
 * @n: input integer.
 * Return: no return.
 */

/**
 * print_number - Print an integer
 * @x: Parameter input
 *
 * Description: print an integer
 */
void print_number(int x)
{
unsigned int n;

if (x < 0)
{
_putchar('-');
n = -x;
}
else
n = x;
if (n / 10 != 0)
print_number(n / 10);
_putchar((n % 10) + '0');
}
