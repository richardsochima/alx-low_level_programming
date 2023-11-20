#include "lists.h"

/**
 * add_nodeint - add a new node at the beginning of a listint_t list
 * @head: double pointer to head node
 * @n: int value to be stored in new node
 * Return: The address of new element or NULL if failed
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
listint_t *gum;
listint_t *new;

gum = *head;
new = malloc(sizeof(listint_t));
if (new == NULL)
return (NULL);
new->n = n;
*head = new;

if (gum == NULL)
new->next = NULL;
else
new->next = gum;
return (new);
}
