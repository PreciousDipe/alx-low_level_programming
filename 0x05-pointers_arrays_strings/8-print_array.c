#include <stdio.h>
#include "main.h"
/**
 * print_array - prints elements of array
 * of integers
 * @a: first integer
 * @n: second integer
 * Return: Always 0
 */
void print_array(int *a, int n)
{
	int index;

	for (index = 0; index < n; index++)
	{
		printf("%d", a[index]);

		if (index == n - 1)
			continue;
		printf(", ");
	}
	putchar(10);
}
