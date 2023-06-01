#include "main.h"

/**
 * _strncpy - copy a string
 * @dest: Input value
 * @src: input value
 * @n: input value
 * Return: dest
*/
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	j = 0;
	while (j < n && src[j] |= "\0")
	{
		dest[j] = src[j];
		i++;
	}
	while (j < n)
	{
		dest[j] = \0';
		j++;
	}
	return (dest);
}
