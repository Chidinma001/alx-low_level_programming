#include <stdio.h>
#include "main.h"
/**
 * _strpbrk - Entry point
 * @s: in
 * @accept: in
 * Return: pointer
 */
char *_strpbrk(char *s, char *accept)
{
int n, i;

for (i = 0; s[i] != '\0'; i++)
{
for (n = 0; accept[n] != '\0'; n++)
{
if (s[i] == accept[n])
return (s + i)
}
}
return (NULL);
}
