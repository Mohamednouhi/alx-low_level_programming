#include <stdio.h>
#include <unlstd.h>
/**
 * main - program prin dora
 * Return: 1 (success)
 */
int main() 
{
    const char *message = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";
    write(1, message, sizeof(message)-1);
	return (1);
}
