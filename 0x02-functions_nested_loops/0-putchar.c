#include "main.h"

/**
 * main - entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char str[] = "_putchar";
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		++i;
	}
	_putchar('\n');
	return (0);
}
