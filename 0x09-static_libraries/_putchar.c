#include <unistd.h>

/**
 * _putchar - write the caracter c to stdout
 * @c: the character to print
 *
 * Return: on success 1.
 * on eror return -1
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
