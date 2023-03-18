#include <stdio.h>

/**
 * main - ignore q & e of the alphabets
 * Return: Always 0 (success)
 */
int main(void)
{
	char lc, e, q;

	e = 'e';
	q = 'q';

	for (lc = 'a'; lc <= 'z'; lc++)
	if (lc != e && lc != q)
	putchar(lc);
	putchar('\n');
	return (0);
}
