#include "main.h"
/**
 * _islower- shows 1 if the input is a
 * lowercase character: Another case,shows 
 * 0
 *
 * @c: The character is ASCII code
 * Return: 1 for lowercase chracter 0 for the rest 
 */
_int islower(int c)
{
	if (c >= 97 && c<= 122)
	{
		return (1);
	}
	else 
	{ 
		return (0);
	}
	_putchar("\n");
}