#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charater c to stdout
 * @c: The charater to print
 *
 * Return: on success 1
 * On error, -1 is returned, the error is set
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
