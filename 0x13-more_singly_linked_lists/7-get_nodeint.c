#include "lists.h"

/**
 * get_nodeint_at_index - Get the nth node of a `listint_t` linked list
 * @head: pointer to head node
 * @index: index to find the linked list, starting at 0
 * Return:the pointer to node or NULL if failed
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
listint_t *present;
unsigned int count;

present = head;
count = 0;
while (count < index)
{
if (present)
present = present->next;
else
return (NULL);
count++;
}

if (present)
return (present);
else
return (NULL);
}
