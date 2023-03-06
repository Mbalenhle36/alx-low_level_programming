#include "main.h"
/**
 * _strchr - locates a character in a string
 * @s: string to search
 * @c: char to find
 * c in the string s, or NULL if the character is not found
 * Return: a pointer to the first occurrence of the character
 */
char *_strchr(char *s, char c)
{
	int b;

	while (1)
	{
		b = *s++;
		if (b == c)
		{
			return (s - 1);
		}
		if (b == 0)
		{
			return (NULL);
		}
	}
}
