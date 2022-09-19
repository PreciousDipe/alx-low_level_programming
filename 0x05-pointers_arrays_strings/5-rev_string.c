#include <stdio.h>
#include "main.h"
/**
 * rev_string - reverses a string
 * @s: string
 * Result: Always 0
 */
void rev_string(char *s)
{
	int len, index, tmp;
	char h;

	for (len = 0; s[len] != '\0'; len++)
		;

	tmp = len;
	for (len--, index = 0; index < tmp / 2; len--, index++)
	{
		h = s[index];
		s[index] = s[len];
		s[len] = h;
	}
}
