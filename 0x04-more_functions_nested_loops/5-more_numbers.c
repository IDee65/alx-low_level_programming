#include "main.h"
/**
 * more_numbers - prints the numbers
 *
 */
void more_numbers(void)
{
int i = 0;
for (; i <= 9; i++)
{
int j = 0;
for (; j <= 14; j++)
{
if (i > 9)
{
_putchar(i / 10 + '0');
}
_putchar(i % 10 + '0');
}
_putchar('\n');
}
}
