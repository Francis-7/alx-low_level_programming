#include <stdio.h>

/**
 *
 *main - print digit numbers starting from 0
 *
 * Description: program that prints all possible different combinations of two digits
 * 
 * Return: returns zero at the end
 *
 */
int main()
{
	int i,j;

	for(i = 0; i <= 9; i++)
	{
		for(j = 0; j <= 9; j++)
		{
			if(j > i)
			{
				putchar(i + '0');
				putchar(j + '0');
				if(i != 8)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
	
