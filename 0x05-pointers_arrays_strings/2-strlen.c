#include <stdio.h>
#include "main.h"
/**
 * _strlen - shows length of string
 * @str: string
 * Return: the length
 */
int _strlen(char *str)
{
	int l = 0;

	while (*str != '\0')
	{
		l++;
		str++;
	}
	return (l);
}
