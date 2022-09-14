#include "main.h"

/**
 * main - entry point
 * Return: always 0 (Success)
 */

int main(void)
{
  char str[] = "_putchar";
  int ch;
  for (ch =0; ch <8; ++ch)
  {
	  -putchar(str[ch]);
  }
  _putchar('\n');
 return(0);
}
