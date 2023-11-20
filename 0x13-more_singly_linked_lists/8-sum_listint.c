#include "lists.h"

/**
 * sum_listint - function that sum all the data (n) of a listint_t linked list
 * @head: pointer to head
 * Return: sum of all int n
 */
int sum_listint(listint_t *head)
{
int sum;
listint_t *present;
for (sum = 0, present = head; present != NULL; present = present->next)
sum += present->n;
return (sum);
}
