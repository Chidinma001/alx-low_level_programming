#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * rev_string - function that reverses a string
 * @s: Pointer parameter
 * Return: 0
 */

void rev_string(char *s)
{
	int i, len;
	char tmp;

	len = strlen(s);
	for (i = 0; i < len / 2; i++)
	{		tmp = s[i];
		s[i] = s[len - 1 - i];
			s[len - 1 - i] = tmp;
		}

}
