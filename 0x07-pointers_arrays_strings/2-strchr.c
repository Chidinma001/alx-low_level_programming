#include "main.h"
#include <stdio.h>
/**
 * _strchr - searches for a character
 * @s: where to find from
 * @c: the character to find
 * Return: a pointer
 */
char *_strchr(char *s, char c)
{
int f;

for (f = 0; s[f] >= '\0'; f++)
{
if (s[f] == c)
{
return (s + f);
}
}
return (NULL);

}
