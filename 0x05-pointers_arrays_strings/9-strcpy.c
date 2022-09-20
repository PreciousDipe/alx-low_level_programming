#include <stdio.h>
#include "main.h"
/**
 * _strcpy - copies the string pointed to
 * by the src
 * @dest: A bufferto copy the string
 * @src: the source string to copy
 * Return: dest
 */
char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
		dest[index] = src[index];
		index++;
	}
	return (dest);
}
