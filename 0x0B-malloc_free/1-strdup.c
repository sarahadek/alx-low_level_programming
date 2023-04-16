#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * _strdup - duplicate to new memory space location
 * @str: char
 * Return: 0
 */

char *_strdup(char *str)

{

	char *ptr;

	int n, j = 0;



	if (str == NULL)

		return (NULL);

	n = 0;

	while (str[n] != '\0')

		n++;



	ptr = malloc(sizeof(char) * (n + 1));



	if (ptr == NULL)

		return (NULL);



	for (j = 0; str[j]; j++)
		ptr[j] = str[j];

	return (ptr);
}
