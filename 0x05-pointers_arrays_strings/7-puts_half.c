#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 5; index < len; index++)
		putchar(str[index]);
	putchar(10);
}
