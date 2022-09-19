#include <stdio.h>
#include "main.h"
/**
 * puts_half - prints half of a string
 * @str: string
 * Return: Always 0
 */
void puts_half(char *str)
{
	int index = 0, len = 0, n;

	while (str[index++])
		len++;

	if ((len % 2) == 0)
		n = len / 2;

	else
		n = (len + 1) / 2;

	for (index = n; index < len; index++)
		putchar(str[index]);
	putchar(10);
}
