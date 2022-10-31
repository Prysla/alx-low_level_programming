#include "main.h"
#include <stdio.h>

/**
 **_strchr - locates character ins a string
 * @s: string to search
 * @c: character to find
 *
 * Return: a pointer to the first occurence of the
 * character c in the string s, or NULL if the char is not foumd
*/
char *_strchr(char *s, char c)
{
	int press;

	while (1)
	{
		press = *s++;
		if (press == c)
		{
			return (s - 1);
		}
		if (press == 0)
		{
			return (NULL);
		}
	}
}
