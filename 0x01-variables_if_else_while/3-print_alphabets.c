#include <stdio.h>

/**
 * main -  alphABET
 * Return: Always 0 (success)
 */
int main(void)
{
	char luc;

	for (luc = 'a'; luc <= 'z'; luc++)
	putchar(luc);
	for (luc = 'A'; luc <= 'Z'; luc++)
	putchar(luc);
	putchar('\n');
	return (0);
}
