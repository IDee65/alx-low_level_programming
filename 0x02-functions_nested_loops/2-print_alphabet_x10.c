#include "main.h"
/**
 * print_alphabet - prints alphabet
 *
 * Return: always 0;
 *
 */
void print_alphabet(void)
{
char alp;
int n = 0;
for (; n < 10; n++){
for (alp = 'a'; alp <= 'z'; alp++)
{
_putchar(alp);
}
_putchar('\n');
}
}
