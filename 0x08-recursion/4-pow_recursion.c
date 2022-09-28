#include <stdio.h>
#include "main.h"
#include <math.h>
/**
 * _pow_recursion - prints the result of x raised
 * to the power y
 * @x: first integer
 * @y: power
 * Return: returns an integer
 */
int _pow_recursion(int x, int y)
{
	if ( y > 0)
		return (x * _pow_recursion(x, y - 1));
	else if (y < 0)
		return (-1);
	else
		return (1);
}
