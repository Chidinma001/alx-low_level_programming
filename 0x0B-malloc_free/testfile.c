#include<stdio.h>
#include "main.h"
/**
 * main - a program to test task 2
 * Return: 0
 *
 */
int main(void)
{
	char *s;

	s = str_concat("Betty ", "Holberton");
	if (s == NULL)
	{
		printf("failed\n");
		return (1);
	}
	printf("%s\n", s);
	free(s);

	return (0);
}
