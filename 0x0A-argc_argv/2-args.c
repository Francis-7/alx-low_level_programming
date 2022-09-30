#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count of the argument
 * @argv: the string of the argument
 *
 * Return: Always zero
 */
int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}
