#include "main.h"
/**
*  * print_binary -us to  prints the binary equal to of a decimal number
*   * @n:  the numberassigned  to us to  print in binary
*/
void print_binary(unsigned long int n)
{
int s, cal = 0;
unsigned long int current;
for (s = 63; s >= 0; s--)
{
current = n >> s;
if (current & 1)
{
_putchar('1');
cal++;
}
else if (cal)
_putchar('0');
}
if (!cal)
_putchar('0');
}
