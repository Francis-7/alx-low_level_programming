#include "main.h"

/**
 * factorial - returns the factor of a given number
 * @n: number to be used
 *
 * Return: the factorial of the number
 */
int factorial(int n)
{
	if (n < 0)
		return (-1);
	else if (n == 0)
		return (1);
	next_factorial(n - 1);
	return (n * next_factorial);
}
