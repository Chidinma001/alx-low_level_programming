#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: param checked if lowercase
 * Return: 1 if lowercase otherwise 0
*/

int _islower(int c)
{
if (c >= 'a' && c <= 'z')
{
return (1);
}
else
return (0);

_putchar('\n');
}

