#include <stdio.h>
/**
 * main - Entry Point
 *
 * finding the size of various data types
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	size_t char_size = sizeof(char);
	size_t int_size = sizeof(int);
	size_t long_int_size = sizeof(long int);
	size_t long_long_int_size = sizeof(long long int);
	size_t float_size = sizeof(float);

	printf("Size of a char: %zu byte(s)\n", char_size);
	printf("Size of an int: %zu byte(s)\n", int_size);
	printf("Size of a long int: %zu byte(s)\n", long_int_size);
	printf("Size of a long long int: %zu byte(s)\n", long_long_int_size);
	printf("Size of a float: %zu byte(s)\n", float_size);

	return (0);
}
