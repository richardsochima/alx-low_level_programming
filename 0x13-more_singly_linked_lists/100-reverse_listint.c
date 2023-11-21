#include "lists.h"
#include <stdio.h>
/**
 * reverse_listint -Function that reverse a listint_t linked list
 * @head: double pointer to head
 * Description: Allowed to loop only once.
 * Return: pointer to first node of reversed list
 */
listint_t *reverse_listint(listint_t **head)
{
listint_t *gum;
listint_t *present;

if (*head == NULL)
return (NULL);

present = *head;
*head = present->next;
gum = (*head)->next;
present->next = NULL;
if (*head == NULL)
{
*head = present;
return (present);
}

while (gum != NULL)
{
(*head)->next = present;
present = *head;
*head = gum;
gum = (*head)->next;
}

(*head)->next = present;
return (*head);
}
