#include "main.h"

/**
 * times_table - Printsthe 9 times table, starting with 0.
 */
void times_table(void)
{
int num, mult, prod;
for (num = 0; num <= 9; num++)
{
for (mult = 0; mult <= 9; mult++)
{
prod = num * mult;
if ((prod / 10) == 0)
{
if (num == 0)
{
_putchar(',');
_putchar(' ');
}
}
else
{
_putchar((prod / 10) + '0');
_putchar((prod % 10) + '0');
if (mult < 9)
{
_putchar(',');
_putchar(' ');
}
}
}
_putchar('\n');
}
}
