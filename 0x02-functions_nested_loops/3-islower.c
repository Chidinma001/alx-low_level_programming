#include "main.h"
/**
 * _islower - function to check for lowercase character
 * @c: int is used for argument of the function
 * return: 1 if lowercase otherwise 0
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

