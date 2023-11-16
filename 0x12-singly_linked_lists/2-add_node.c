#include "lists.h"
#include <string.h>
#include <stdio.h>

/**
 * add_node - add a new node at the beginning of `list_t` list
 * @head: double pointer to head
 * @str: the string to  be duplicated
 * Return: Address of the new element or NULL if failed
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *new_node;
int q;

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
new_node->next = *head;
*head = new_node;
return (*head);
}
