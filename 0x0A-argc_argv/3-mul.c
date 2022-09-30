#include <stdio.h>
#include <stdlib.h>

/**
 * main - Entry point
 * @argc: count argument
 * @argv: string of the argument
 *
 * Return: on success zero on failure Error
 */
int main(int argc, char *argv[])
{
	int a, b;

	if (argc == 3)
	{
		a = atoi(argv[1]);
		b = atoi(argv[2]);
		printf("%d\n", a * b);
		return (0);
	}
	printf("Error\n");
	return (1);
}
