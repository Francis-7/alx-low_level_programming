#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 *
 * @argc: counts the number of arguements
 * @argv: counts the string lenght
 *
 * Return: Always 0 (Success)
 */

int main(int argc, char **argv)
{
	while (argc--)
		printf("%s\n", *argv++);
	exit(EXIT_SUCCESS);
}

