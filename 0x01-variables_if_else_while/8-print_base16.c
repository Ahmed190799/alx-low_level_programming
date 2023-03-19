#include <stdio.h>

/**
 * main - prints in hexa digits
 * Return: Always 0 (success)
 */
int main(void)
{
	int i;
	char c;

	for (i = 0; i <= 9; i++)
	for (c = 'a'; c <= 'f'; c++)
	putchar(i);
	putchar(c);
	putchar('\n');
	return (0);
}
