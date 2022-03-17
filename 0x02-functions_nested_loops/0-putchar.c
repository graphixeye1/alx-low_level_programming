#include "main.h"

/**
 * main - print out maincar by char.
 * Description: uses the main head file
 * that containss the fuction _putchar
 * Return 0.
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
