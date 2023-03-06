#include "main.h"
/**
 * _memcpy - copy memory area
 * @src: memory area to be copied from
 * @dest: destination memory area
 * @n: number of bytes to copy
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}
	return (dest);
}
