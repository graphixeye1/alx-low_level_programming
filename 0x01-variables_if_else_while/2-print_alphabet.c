#include <stdio.h>

/**
 * main - alphabet in lowercase, followed by a new line.
 *
 * Description: print the letters of the alphabet
 *
 * Always return(0)
 */

void main(void)
{
	int ch = 'a';

	for (ch = 'a'; ch <= 'z'; ch++)
	{
		putchar(ch);
	}
	putchar('\n');

	return (0);
}
