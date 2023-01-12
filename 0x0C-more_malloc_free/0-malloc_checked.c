#include "main.h"
#include <stdlib.h>
/**
 * malloc_checked - allocates memory
 * @b: number of bytes to allocate
 * If malloc fails, set exit status 98
 *
 * Return: a pointer or NULL
 */
void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);
	if (i == NULL)
		exit(98);

	return (i);
}
