#include <stdio.h>

/**
 * main - print alphabet
 * Return: always 0 (success)
*/

int main(void)

{
	char c;

	for (c = 'a'; c <= 'z'; c++)
	putchar(c);
	putchar('\n');
	return (0);
}
