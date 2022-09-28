#include <stdio.h>
#include "main.h"
/**
 * check_int - checks in an integer for sqrt
 * @sqr: square integer
 * @x: integer
 * Return: 1
 */
int check_int(int sqr, int x)
{
	if (x * x == sqr)
		return (x);
	else if (x > sqr / x)
		return (check_int(sqr, x - 1));
	else if (x < sqr / x)
		return (check_int(sqr, x + 1));
	else
		return (-1);
}
/**
 * _sqrt_recursion - prints natural sqaure root
 * of a number
 * @n: an integer
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	int start;

	start = 1;

	if (n < 0)
		return (-1);
	else if (n == 1)
		return (1);
	else
		return (check_int(n, start));
}
