#include <stdio.h>
#include "main.h"
/**
 * factorial - prints factorial of a given number
 * @n: an integer
 * Return: factoral of a number
 */
int factorial(int n)
{
	if (n > 0)
		return (n * factorial(n - 1));
	else if (n < 0)
		return (-1);
	else
		return (1);
}
