#include "main.h"

/**
 * set string - set the value of a pointer to a char
 * @s: pointer to pointer
 * @to: pointer char
 */

void set_string(char **s, char *to)
{
	*s = to;
}
