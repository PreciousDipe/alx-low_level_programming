#include <stdio.h>
#include <string.h>
#include "main.h"
/**
 * _strlen_recursion - prints the length of a
 * string
 * @s: a string
 * Return: a string
 */
int _strlen_recursion(char *n)
{
	if (*n == '\0')
		return (0);
	return (1 + _strlen_recursion((n + 1)));
}
