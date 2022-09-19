/*
 * File: 1-swap.c
 * Auth: Precious Ogundipe
 */

#include "main.h"

/**
 * swap_int - swaps the values of intgers
 *
 * @a: first integer
 * @b: second integer
 * Return: Nothing
 */
void swap_int(int *a, int *b)
{
	int swp = *a;
	*a = *b;
	*b = swp;
}
