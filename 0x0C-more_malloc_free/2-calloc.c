#include "main.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * _calloc -allocated numuric for nmemb
 * @nmemb: number of elemets in the array
 * @size: byte for each position in array
 *
 * Return: void pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *p;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	p = malloc(nmemb * size);
	if (p == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		p[i] = 0;

	return (p);
}

