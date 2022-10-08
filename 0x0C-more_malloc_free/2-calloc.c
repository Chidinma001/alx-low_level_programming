#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * _memset - copy char
 * @s: string
 * @b: input
 * @n: bytes
 * Return: string
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
{
s[i] = b;
}

return (s);
}
/**
 * _calloc - allocates memory for an array using malloc
 * @nmemb: n elements
 * @size: bytes
 * Return: pointer
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
void *arr;
unsigned int i;
char *k;

if (nmemb == 0 || size == 0)
return (NULL);
if (arr == NULL)
return (NULL);

k = arr;
for (i = 0; i < nmemb * size; i++)
k[i] = 0;
return (arr);
}
