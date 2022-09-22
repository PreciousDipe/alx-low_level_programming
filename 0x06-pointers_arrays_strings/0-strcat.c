#include <stdio.h>
#include "main.h"
/**
 * _strcat - concatenates two strings
 * @dest: first string
 * @src: second string
 * Return: the string dest
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int n = 0;

	while (dest[n] != '\0')
	{
		n++;
	}
	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[n + 1] = src[i];
	dest[n + 1] = '\0';

	return (dest);
}
