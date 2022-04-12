#include "main.h"

/**
 * _islower - Checks if the character is lowercase.
 * @c: The character to checked.
 *
 * Return: 1 if the character is lower case, 0 otherwise.
 */
int _islower(int c)
{
if (c >= 'a' && c <= 'z')
return (1);
else
return (0);
}
