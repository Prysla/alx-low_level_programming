#include <stdio.h>

/**
 * main - prints the numbers from 00 to 99
 * Return: ALways 0 (Success)
 */
int main(void)
{
	int n, i;

	for (n = 48; n < 57; n++)
	{
		for (i = 48; i <= 57; i++)
		{
			putchar(n);
			putchar(i);
			if (n != 57 || i != 57)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
