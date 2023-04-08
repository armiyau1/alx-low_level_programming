#include "main.h"

/**
*  * binary_to_uint - to  convert a binary num to an  unsigned integar
*   * @b:the  string  the binary number is going to be inside
*    *
*     * Return:we are to return the converted number
*/
unsigned int binary_to_uint(const char *b)
{
int n;
unsigned int dv = 0;

if (!b)
return (0);

for (n = 0; b[n]; n++)
{
if (b[n] < '0' || b[n] > '1')
return (0);
dv = 2 * dv + (b[n] - '0');
}
return (dv);
}

