#include <stdio.h>
#include "main.h"
/**
 * _puts_recursion - prints a string
 * @s: string
 * Return: a string
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		putchar(*(s + 0));
		_puts_recursion((s + 1));
	}
	else
	{
		putchar(10);
		return;
	}
}
