#include "lists.h"


/**
 * print_list - Prints all the contents of a Linked list.
 * @h: Linked list.
 *
 * Return: The length of the Linked list.
 */

size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if ((h->str) == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
			printf("[%d] %s\n", h->len, h->str);

		counter++;

		h = h->next;

	}

	return (counter);
}
