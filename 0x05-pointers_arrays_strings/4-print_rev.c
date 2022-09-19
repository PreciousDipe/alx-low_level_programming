#include <stdio.h>
#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @str: string
 * Return: Nothing
 */
void print_rev(char *str)
{
	int len;

	for (len = 0; str[len] != '\0'; len++)
		;
	for (len--; len >= 0; len--)
		putchar(str[len]);
	putchar(10);
}
