#include <stdio.h>

/**
 * main - last number
 * Return: Always 0 (success)
 */
int main(void)
{
	int n;

	scanf("%d", &n);

	if (n > 5)
	{
		printf("and is greater than 5\n");
	} else if (n > 0 && n < 6)
	{
		printf("and is less than 6 and not 0\n");
	} else if (n == 0)
	{
		printf("and is 0\n");
	}
	return (0);
}
