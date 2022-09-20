#include "main.h"
#include <stdio.h>

/**
 * _strlen - function for counting length of a string
 * @s: a pointer for counting the strting
 * Return: int i
 */
int _strlen(char *s)
{
	int i = 0;

	while (s[i] != '\0')

	{
		i++;
	}

	return (i);
}
