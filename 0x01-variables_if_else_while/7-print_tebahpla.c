#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - smile in the mirror
 * Return: always 0 (success)
 */

int main(void)

{
	char low;

	for (low = 'z'; low >= 'a'; low--)
	putchar(low);
	putchar('\n');

	return (0);
}
