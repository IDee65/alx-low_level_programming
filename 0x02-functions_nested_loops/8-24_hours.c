#include "main.h"

/**
 * jack_bauer - Print minutes in a day in 24 hour format
 *
 */
void jack_bauer(void)
{
int hour = 0;

for (; hour < 24; hour++)
{
int minute = 0;

for (; minute < 60; minute++)
{
_putchar(hour / 10 + '0');
_putchar(hour % 10 + '0');
_putchar(':');
_putchar(minute / 10 + '0');
_putchar(minute % 10 + '0');
_putchar('\n');
}
}
}
