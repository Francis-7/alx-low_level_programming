#include <stdio.h>
/**
 * main - entry point
 *
 * codes for printing all possible combination of two d/t digits
 * in ascending order and seperated by a comma and followd by a space
 *
 * Return: 0 success
 */
int main(void)
{
	int i, p, m;

	for (i = 0; i <= 9; i++)
	{
		for (p = 1; p <= 9; p++)
		{
			for (m = 2; m <= 9; m++)
			{
				if (m > p && p > 1)
				{
					putchar(i + '0');
					putchar(p + '0');
					putchar(m + '0');
					if (i != 7)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}

