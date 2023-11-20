#include "lists.h"

/**
 * free_listint - free a `listint_t` list
 * @head: head of linked list
 */
void free_listint(listint_t *head)
{
listint_t *gum;

while (head != NULL)
gum = head;
head = head->next;
free(gum);
}
