#include <stdio.h>
#include <stdlib.h>
/**
 * main - print number of arguments
 * @argc: counts the arguments
 * @argv: array of arguments
 * Return: Always 0
 */
int main(int argc, char *argv[])
{
	int i;

	i = argc - 1;
	printf("%d\n", i);
	return (0);
}
