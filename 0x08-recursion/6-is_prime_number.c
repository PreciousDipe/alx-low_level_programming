#include <stdio.h>
#include "main.h"
/**
 * prime - checks for prime number
 * @n: an integer
 * @i: iterator
 * Return: 1 if the number is prime
 */
int prime(int n, int i)
{
	if (i == 1)
		return (1);  
	if (n % i == 0 && i > 0)
		return (0);
	return (prime(n, i - 1));
}
/**
 * is_prime_number - prints a prime number                        * @n: an integer                                                 * Return: 1                                                      */                                                              int is_prime_number(int n)                                       {                                                                        if (n <= 1)                                                              return (0);                                              return (prime(n, n - 1));                                }
