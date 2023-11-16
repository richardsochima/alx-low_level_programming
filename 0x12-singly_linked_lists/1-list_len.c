#include "lists.h"

/**
 * list_len - Returns the number of elements in a linked `list_t` list
 * @h: The head of linked list
 * Return: the number of elements in list
 */
size_t list_len(const list_t *h)
{
const list_t *var;
size_t q;
q = 0;
var = h;
while (var != NULL)
{
var = var->next;
q++;
}

return (q);
}
