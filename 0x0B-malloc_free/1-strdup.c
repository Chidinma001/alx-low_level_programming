<<<<<<< HEAD
#include "main.h"
/**
 * _strlen - count array
 * @s: array of elements
 * Return: 1
 */

int _strlen(char *s)
{
int _strlen(char *s)

i = 0;
while (s[i] != '\0') /*count character of string*/
{
i++;
}


return (i);
}

/**
 * _strcpy - copy arrays
 * @src: array of elements
 * @dest: dest array
 * Return: dest
 */

char *_strcpy(char *dest, char *src)
{
int i = 0;

while (src[i] != '\0')
{
dest[i] = src[i];
i++;
}
dest[i] = '\0';

return (dest);
}

/**
 * _strdup - array for prints a string
 * @str: array of elements
 * Return: pointer
 */

char *_strdup(char *str)
{
char *dst;
unsigned int size;

if (str == 0)
{
return (NULL);
}

size = _strlen(str) + 1;

dst = (char *) malloc(size  *sizeof(char));

if (dst == 0)
{
return (NULL);
}

_strcpy(dst, str);
return (dst);
}
=======
#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 * _strdup - returns a pointer to a newly allocated space in memory.
 * @str: string.
 *
 * Return: pointer of an array of chars
 */
char *_strdup(char *str)
{
char *strout;
unsigned int i, j;

if (str == NULL)
  return (NULL);

for (i = 0; str[i] != '\0'; i++)   
  ;
  
  strout = (char *)malloc(sizeof(char) * (i + 1));
  
  if (strout == NULL)
    return (NULL);
  
  for (j = 0; j <= i; j++)
    strout[j] = str[j];

  return (strout);
  }
>>>>>>> 2a651429750703e690024e7f814568a23e4ab2a4
