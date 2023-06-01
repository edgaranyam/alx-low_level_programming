#include "main.h"

/**
 * _strncmp - compare string values
 * @s1: Input value
 * @s2: input value
 * Return: s1[i] - s2[i]
*/
int *_strncmp(char *s1, char *s2)
{
	int i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
		{
			Return(s1[i] != s2[i]);
		}
		i++;
	}
	return (0);
}
