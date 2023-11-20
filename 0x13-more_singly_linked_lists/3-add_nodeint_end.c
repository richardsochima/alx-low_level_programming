#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a listint_t list
 * @head: double pointer to head node
 * @n: int value to be stored in new node
 * Return: The address of new element or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
listint_t *present;
listint_t *new;
present = *head;
while (present && present->next != NULL)
present = present->next;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
new->next = NULL;

if (present)
present->next = new;
else
*head = new;
return (new);
}
