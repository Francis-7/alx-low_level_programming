#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
* print-function that displays the element in a linked list
* @h-integer to be printed
*
*/
void size_t print_dlistint(const dlistint_t *h);
{
	dlistint_t *h;

	if (head == NULL)
		print("list is empty");
	else
		for (h = head; h != NULL; h = h->next)
			printf("%d\n", h->data);
}
