#include <stdio.h>
#include "main.h"
/**
 * puts2 - prints other character of a string
 * @str: string
 * Return: Nothing
 */
void puts2(char *str)
{
	int index = 0, len = 0;

	while (str[index++])
		len++;

	for (index = 0; index < len; index += 2)
		putchar(str[index]);
	putchar(10);
}
