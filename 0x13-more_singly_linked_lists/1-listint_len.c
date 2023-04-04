#include <stdio.h>
#include "lists.h"
/**
 * function that returns the number of elements in a linked listint_t list.
 * size_t listint_len(const listint_t *h)
 * return number of elements
 */
size_t listint_len(const listint_t *h)
{
size_t number  = 0;
while (h != NULL)
{
number++;
h = h->next;
}
return (number);
}
