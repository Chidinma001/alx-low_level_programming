#include "main.h"
/**
 * _isalpha - checks for alphabetic characters, be it uppercase or lowercase
 * @c: param if alphabetic letters as state above
 * Return:1 if otherwise 0
 */
int _isalpha(int c)
{
if	  ((c >= 'a' || c >= 'A')  &&  (c <= 'z' || c <= 'Z'))
return (1);
else
return (0);
_putchar('\n');
}
