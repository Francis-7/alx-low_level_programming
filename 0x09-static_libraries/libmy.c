!<arch>
0-isupper.c/    0           0     0     644     237       `
#include "main.h"

/**
*_isupper - checks if a  character is uppercase or not
*@c: character to be tested
*Return: 1 whether it is, 0 otherwise
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
	{
		return (1);
	}

	return (0);
}

0-memset.c/     0           0     0     644     262       `
#include "main.h"

/**
 * _memset - fill a block of mermory
 * @s: starting address
 * @b: value
 * @n: no of bytes
 * Return: Always 0
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
0-strcat.c/     0           0     0     644     446       `
#include "main.h"

/**
 *_strcat - concatenates  the string pointed to by @src to
 * the end of the string pointed to by @dest
 *@dest: String that will be appended
 *@src: String to be concatenated upon
 *
 * Return: returns poiner to @dest
 */

char *_strcat(char *dest, char *src)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index]; index++)
		dest[dest_len++] = src[index];

	return (dest);
}
100-atoi.c/     0           0     0     644     363       `
#include "main.h"

/**
* _atoi - converts a string to an int
* @s: the string to be changed
*
* Return: the converted int
*/

int _atoi(char *s)
{
	int sign = 1;
	unsigned int num = 0;

	do {
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
			num = num * 10 + (*s - '0');
		else if (num > 0)
			break;
	} while (*s++);

	return (num * sign);
}

1-isdigit.c/    0           0     0     644     227       `
#include "main.h"

/**
*_isdigit - checks whether a  character is a digit or not
*@c: tested character
*Return: 1 if it is, 0 otherwise
*/

int _isdigit(int c)
{
	if ((c >= 48) && (c <= 57))
	{
		return (1);
	}

	return (0);
}

1-memcpy.c/     0           0     0     644     277       `
#include "main.h"

/**
 * _memcpy - function that copies memory
 * @dest: copy to
 * @src: copy from
 * @n: no of bytes
 * Return: dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
		dest[i] = src[i];

	return (dest);
}

1-strncat.c/    0           0     0     644     485       `
#include "main.h"
/**
 *_strncat - concatenate two strings but add inputted number of bytes
 *@dest: string to be appended upon
 *@src: string to be completed at end of dest
 *@n:integer parameter to compare index to
 *Return: returns new concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{

	int index = 0, dest_len = 0;

	while (dest[index++])
		dest_len++;

	for (index = 0; src[index] && index < n; index++)
		dest[dest_len++] = src[index];

	return (dest);

}

2-strchr.c/     0           0     0     644     236       `
#include "main.h"

/**
 *_strchr - Entry point
 *@s: string pointed to
 *@c: input
 *Return: Always 0
 */
char *_strchr(char *s, char c)
{
	int i = 0;

	for (; s[i] >= '\0'; i++)
	{
		if (s[i] == c)
			return (&s[i]);
	}
	return (0);
}
2-strlen.c/     0           0     0     644     215       `
#include "main.h"

/**
 *_strlen - returns the length of a string
 * @s: string
 *Return: returns length as integer;
 */

int _strlen(char *s)
{
	int len = 0;

	while (*(s + len) != '\0')
		len++;

	return (len);
}

2-strncpy.c/    0           0     0     644     656       `
#include "main.h"
/**
*  _strncpy - C function that copies a string, including the
*  terminating null byte, using at most an inputted number of bytes.
*  If the length of the source string is less than the maximum byte number,
*  the remainder of the destination string is filled with null bytes.
*  Works identically to the standard library function `strncpy`.
*@dest: buffer storing the string copy
*@src:the source string
*@n:max nummber of byte copied
*Return: returns
*/

char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];

	for ( ; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
3-islower.c/    0           0     0     644     248       `
#include "main.h"
/**
 *_islower - function to check for lowercase character
 *@c: is the int that will use for the argument of the function
 *Return: 0
 */
int _islower(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
		return (0);
}
3-puts.c/       0           0     0     644     282       `
#include <stdio.h>
#include "main.h"

/**
 *_puts - prints a string
 * @str: string to print
 *
 * Description: prints a string
 * On success: returns no error
 */

void _puts(char *str)
{
	int i = 0;

	while (*(str + i) != '\0')
	{
		putchar(*(str + i));
		i++;
	}
	putchar(10);
}
3-strcmp.c/     0           0     0     644     578       `
#include "main.h"

/**
*  _strcmp - Function which compare two strings and
*@s1: first string
*@s2:second string
*Return:
*		returns zero if s1 == s2
*		returns negative number if s1 < s2
*		returns positive number if s1 > s2
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0, diff = 0;

	while (1)
	{
		if (s1[i] == '\0' && s2[i] == '\0')
			break;
		else if (s1[i] == '\0')
		{
			diff = s2[i];
			break;
		}
		else if (s2[i] == '\0')
		{
			diff = s1[i];
			break;
		}
		else if (s1[i] != s2[i])
		{
			diff = s1[i] - s2[i];
			break;
		}
		else
			i++;

	}
	return (diff);
}
3-strspn.c/     0           0     0     644     361       `
#include "main.h"
/**
 * _strspn - Entry point
 * @s: input
 * @accept: input
 * Return: Always 0
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int n = 0;
	int r;

	while (*s)
	{
		for (r = 0; accept[r]; r++)
		{
			if (*s == accept[r])
			{
				n++;
				break;
			}
			else if (accept[r + 1] == '\0')
				return (n);
		}
		s++;
	}
	return (n);
}

4-isalpha.c/    0           0     0     644     294       `
#include "main.h"
/**
 *_isalpha - function to check if c is a letter, lowercase or uppercase
 *@c: is the int that will use for the arguement of the function
 *Return: 0
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
		return (0);
}
4-strpbrk.c/    0           0     0     644     267       `
#include "main.h"

/**
 *_strpbrk - Entry point
 *@s: input
 *@accept: input
 *Return: Always 0
 */
char *_strpbrk(char *s, char *accept)
{
	int b;

	while (*s)
	{
		for (b = 0; accept[b]; b++)
		{
			if (*s == accept[b])
			return (s);
		}
	s++;
	}
return ('\0');
}

5-strstr.c/     0           0     0     644     374       `
#include "main.h"

/**
 * _strstr - Entry point
 * @haystack: input
 * @needle: input
 * Return: Always 0
 */
char *_strstr(char *haystack, char *needle)
{
	for (; *haystack != '\0'; haystack++)
	{
		char *one = haystack;
		char *two = needle;

		while (*one == *two && *two != '\0')
		{
			one++;
			two++;
		}

		if (*two == '\0')
			return (haystack);
	}

	return (0);
}
6-abs.c/        0           0     0     644     275       `
#include "main.h"
#include <stdio.h>
/**
 * _abs - function that computes the absolute value of an integer
 * @c:  is the int that will use for the argument of the function
 * Return: 0
 */
int _abs(int c)
{
	if (c > 0 || c == 0)
	{
	return (c);
	}
	else
	return (c * -1);
}

9-strcpy.c/     0           0     0     644     291       `
#include "main.h"

/**
* _strcpy - Copy paste string
* @dest: destination
* @src: source
*
* Return: destination
*/

char *_strcpy(char *dest, char *src)
{
	int inc = 0;

	while (*(src + inc) != '\0')
	{
		*(dest + inc) = *(src + inc);
		inc++;
	}
	*(dest + inc) = '\0';


	return (dest);
}

_putchar.c/     0           0     0     644     194       `
#include <unistd.h>

/**
 * _putchar - prints chsaracter to stdout
 * @c: character to print
 *
 * Return: 1 on success and -1 on failure
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
