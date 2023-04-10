#include <stdio.h>
/**
*This program checks the endianness of the system
*defines an unsigned int and casts its address to a char pointer to access
*The first byte is checked to determine the endianness
*If it is 0x78, the system is little-endian; otherwise, it is big-endian.
 */
int get_endianness(void)
{
unsigned int num = 0x12345678;
char *i = (char *) &num;
if (*i == 0x78)
{
printf("Little-endian\n");
}
else
{
printf("Big-endian\n");
}
return (0);
}
