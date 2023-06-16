#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - print if negative or zero or positive
 * Return: always (success)
*/
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND - MAX / 2;
	if (n > 0)
	{
	printf("%d is positive\n", n);
	}
	else if (n == 0)
	{
	printf("%d is zero/n", n);
	}
	else if (n < 0)
	printf("%d is negative\n", n)
}
	return(0)
