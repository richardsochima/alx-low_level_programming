#include "lists.h"

/**
 * free_listint2 - free a `listint_t` list
 * @head: double pointer to head
 */
void free_listint2(listint_t **head)
{
listint_t *gum;
if (head == NULL)
return;

while (*head != NULL)
gum = *head;
*head = (*head)->next;
free(gum);
}
