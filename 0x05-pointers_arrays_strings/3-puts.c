/*
 * file: 3-puts.c
 * Auth: Precious Ogundipe
 */

#include <stdio.h>
#include "main.h"
/**
 * _puts - prints a string
 * @str: string
 * Return: nothing
 */
void _puts(char *str)
{
	while (*str)
	{
		putchar(*str++);
	}
	putchar(10);
}
