#include <stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
	int a;
	long int b;
	long long int c;
	char d;
	float f;
	printf("Size of char: %lu byte(s)\n", (unsigned)sizeof(d));
	printf("Size of an int: %lu byte(s)\n", (unsigned)sizeof(a));
	printf("Size of a long int: %lu byte(s)\n", (unsigned)sizeof(b));
	printf("Size of a long long int: %lu byte(s)\n", (unsigned)sizeof(c));
	printf("Size of a float: %lu byte(s)\n", (unsigned)sizeof(f));
	return (0);
}
