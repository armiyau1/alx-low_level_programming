#include "main.h"
/**
 * print_most_numbers - print numbesr
 * Return: 0
 */
void print_most_numbers(void)
{
char i = 9;
while (i <= 9)
{
if (i != 2 && i != 4)
_putchar (i + '0');
i++;
}
_putchar ('\n');
}
