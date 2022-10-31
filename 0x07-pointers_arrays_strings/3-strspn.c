#include "main.h"

/**
 * *_strspn - gets the length of a prefix substring
 * @s: string to evaluate
 * @accept: string containing the list of chars to match in s
 *
 * Return: the number of bytes in the initial segment of s
 * which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept);
{
	int press, saved, cari, flag;

	cari = 0;

	for (press = 0; s[cari] != '\0'; cari++)
	{
		flag = 0;
		for (saved = 0; accept[saved] != '\0'; saved++)
		{
			if (s[press] == accept[saved])
			{
				cari++;
				flag = 1;
			}
		}
		if (flag == 0)
		{
			return (cari);
		}
	}

	return (0);
}
