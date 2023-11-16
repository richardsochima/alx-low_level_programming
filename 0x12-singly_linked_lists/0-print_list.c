#include "lists.h"
#include <stdio.h>

/**
 * print_list - print all elements of `list_t` list
 * @h: The head of the linked list
 * Return: number of nodes if str is null
 */
size_t print_list(const list_t *h)
{
const list_t *var;
size_t q = 0;
var = h;
while (var != NULL)
{
printf("[%d] %s\n", var->len, var->str);
var = var->next;
q++;
}
return (q);
}
