#include <stdio.h>
#include "lists.h"
/**
* prints all the element of listint_t list.
* size_t print_listint(const listint_t *h).
* return numbwr of nodes
*/
size_t print_listint (const listint_t *h)
{
size_t s = 0;
while (h != NULL)
{
printf("%d", h->n);
h = h->next;
s++;
}
return (s);
}
