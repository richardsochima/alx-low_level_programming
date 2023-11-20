#include "lists.h"

/**
 * delete_nodeint_at_index - deletes node at index of a listint_t linked list
 * @head: The double header to head of linked list
 * @index: index of node to be deleted, starts at 0
 * Return: 1 if success, -1 if failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
listint_t *present;
listint_t *gum;
unsigned int p;

p = 0;
present = *head;
if (*head == NULL)
return (-1);

while (p < index)
p++;
gum = present;
if (present->next)
present = present->next;
else
return (-1);

if (index == 0)
*head = present->next;
else if (present->next)
gum->next = present->next;
else
gum->next = NULL;
free(present);
return (1);
}
