#include <stdlib.h>
#include "main.h"

/**
 * memset - fills memory with a constant byte
 * @s: memory area to be filled
 * @b: char to copy
 * @n: number of times to copy b
 *
 * Return: pointer to the memory area s
 */
void *memset(void *s, int b, size_t n)
{
	char *p = s;
	while (n--)
		*p++ = (unsigned char)b;
	return s;
}

/**
 * calloc - allocates memory for an array
 * @nmemb: number of elements in the array
 * @size: size of each element
 *
 * Return: pointer to allocated memory
 */
void *calloc(size_t nmemb, size_t size)
{
	char *ptr;

	if (nmemb == 0 || size == 0)
		return NULL;

	ptr = malloc(size * nmemb);

	if (ptr == NULL)
		return NULL;

	memset(ptr, 0, nmemb * size);

	return ptr;
}
