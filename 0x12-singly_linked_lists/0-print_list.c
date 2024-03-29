#include <stdio.h>
#include "lists.h"
/**
*print_list - prints all the elements of a linked list
*@h: points to the list_t list to print
*Return: the total number of nodes that was  printed
*/
size_t print_list(const list_t *h)
{
size_t c = 0;
while (h)
{
if (h->str == NULL)
{
printf("[0] (null)\n");
}
else
{
printf("[%u] %s\n", h->len, h->str);
h = h->next;
c++;
}
}
return (c);
}
