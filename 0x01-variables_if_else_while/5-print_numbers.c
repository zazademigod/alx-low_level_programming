#include <stdio.h>
/**
 * main - entry to the program
 *
 * Descrption: to print numbers of base 10
 *
 * Return: Always 0 for successful
 */

int main(void)
{
	char c;

	for (c = 0; c <= 9;)
	{
		printf("%d", c);

		c++;
	}

	putchar('\n');
	return (0);
}
