#include "lists.h"
#include <stdio.h>
/**
 * insert_nodeint_at_index -function that insert a new node at a given position
 * @head: double pointer to head
 * @index: insert node at this index, starting count at 0
 * @n: value to store in node
 * Return: Address of new node or NULL if failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
listint_t *new;
listint_t *present;
unsigned int count;
if (head == NULL)
return (NULL);

present = *head;
for (count = 1; present && count < index; count++)
{
present = present->next;
if (present == NULL)
return (NULL);
}
new = malloc(sizeof(listint_t));
if (new == NULL)
{
free(new);
return (NULL);
}
new->n = n;
if (index == 0)
{
*head = new;
new->next = present;
}
else if (present->next)
{
new->next = present->next;
present->next = new;
}
else
{
new->next = NULL;
present->next = new;
}

return (new);
}
