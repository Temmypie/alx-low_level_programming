#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Alway 0 (Success)
 */

int main(void)
{
	printf("size of a char: %zu byte(s)\n", Sizeof(char));
	printf("size of an int: %zu byte(s)\n", Sizeof(int));
	printf("size of a long int: %zu byte(s)\n", Sizeof(long int));
	printf("size of a long long int: %zu byte(s)\n", Sizeof(long long int));
	printf("size of a float: %zu byte(s)\n", Sizeof(float));
	return (0);
}
