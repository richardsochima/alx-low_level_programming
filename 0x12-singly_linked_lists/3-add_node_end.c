#include "lists.h"
#include <string.h>
#include <stdio.h>
/**
 * add_node_end - add a new node at the end of `list_t` list
 * @head: double pointer to head
 * @str: the string to be duplicated
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
list_t *var;
list_t *new_node;
int q;

var = *head;
while (var && var->next != NULL)
var = var->next;
for (q = 0; str[q] != '\0'; q++)
;

new_node = malloc(sizeof(list_t));
if (new_node == NULL)
{
free(new_node);
return (NULL);
}
new_node->str = strdup(str);
if (new_node->str == NULL)
{
free(new_node);
return (NULL);
}
new_node->len = q;
new_node->next = NULL;

if (var)
var->next = new_node;
else
*head = new_node;
return (new_node);
}
