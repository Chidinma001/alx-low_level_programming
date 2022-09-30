#include <stdio.h>
/**
 * _puts_recursion - prints the string s with recursion joor
 * @s: this the variable pointing to the string
 * Return: returns nothing based on the task
 */
void _puts_recursion(char *s)
{
if (*s != '\0')
{
_putchar (*s);
_puts_recursion(s + 1);


}
else
{
	_putchar('\n');
}
}
