#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: counts arguement number
 * @argv: counts string of arguement
 *
 * Return: Always 0
 */

int main(int argc, char *argv[])
{
	(void) argv; /*Ignore argv*/
	printf("%i\n", argc - 1);
	return (0);
}
