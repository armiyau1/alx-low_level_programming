#include "main.h"

/**
 * print_most_numbers - print numbesr
 * Return: 0
 */
void print_most_numbers(void)
{
char n = 9;

while (n <= 9)
{
if (n != 2 && n != 4)
{
_putchar('0' + n);
}
n++;
}
_putchar('\n');
}
