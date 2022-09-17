#include "main.h"

/**
 * jack_bauer - function prints every minute of day of Jack
 * hrs = hours, mnt = minutes
 * Return: void
 */
void jack_bauer(void)
{
	int i, j;

	i = 0;
	while (i <= 23)
	{
		j = 0;
		while (j <= 59)
		{
			_putchar((i / 10) + '0');
			_putchar((i % 10) + '0');
			_putchar(':');
			_putchar((j / 10) + '0');
			_putchar((j % 10) + '0');
			_putchar('\n');
			j++;
		}
		i++;
	}
}
