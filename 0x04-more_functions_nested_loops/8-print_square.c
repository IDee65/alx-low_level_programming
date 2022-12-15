#include "main.h"
/**
 * print_square - prints square stuff
 *
 * @size: integer to set square size
 */
void print_square(int size)
{
int i = 0;
int j = 0;

if (size <= 0)
{
_putchar('\n');
}
else
{
for (; i < size; i++)
{
for (; j < size; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
}
