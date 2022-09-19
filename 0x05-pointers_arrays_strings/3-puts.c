/*
 * file: 3-puts.c
 * Auth: Precious Ogundipe
 */

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
		_putchar(*str++);
	}
	_putchar(10);
}
