#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string
 * Return: Nothing
 */
void print_rev(char *s)
{
	int len;

	for (len = 0; s[len] != '\0'; len++)
		;
	for (len--; len >= 0; len--)
		putchar(s[len]);
	putchar(10);
}
