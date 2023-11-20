#include "lists.h"

/**
 * listint_len - find the number of elements in a linked `listint_t` list
 * @h: The linked list head
 * Return: The number of elements in linked list
 */
size_t listint_len(const listint_t *h)
{
const listint_t *p;
size_t count;
for (p = h, count = 0; p != NULL; count++, p = p->next)
;
return (count);
}
