#include "main.h"

/**
 * *_memcpy - copies memory area
 * @dest: destinatination memory area
 * @src: memory area to copy from
 * @n: number of bytes sto copy
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n);
{
	unsigned int press;

	for (press = 0; press <  n; press++)
	{
		dest[press] = src[press];
	}

	return (dest);
}
