#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - combi
 * Return: always 0 (success)
 */

int main(void)

{
	int d, p, q;

	for (d = 'o'; d < '8'; d++)
	{
	for (p = d + 1; p < '9'; p++)
	{
	for (q = p + 1; q <= '9'; q++)
	{
	if ((p != d) != q)
	{
	putchar(d);
	putchar(p);
	putchar(q);
	if (d == '7' && p == '8')
	continue;
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}
