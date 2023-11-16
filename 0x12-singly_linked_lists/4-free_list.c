#include "lists.h"

/**
 * free_list - free a `list_t` list
 * @head: The head of linked list
 */
void free_list(list_t *head)
{
list_t *var;
list_t *nxt_node;

var = head;

while (var != NULL)
{
nxt_node = var->next;
free(var->str);
free(var);
var = nxt_node;
}
}
