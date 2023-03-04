#include <stdio.h>
/**
 * main - this is the entry o fthe program
 *
 * Description: Prints the alphabets in lower case
 *
 * Return: Always 0 (Success)
 */
int main(void)

{
	char c = 'a';

	char C = 'A';

	while (c <= 'z')
	{

		putchar(c);

		c++;

	}

	while (C <= 'Z')
	{

		putchar(C);

		C++;

	}

	putchar('\n');

	return (0);
}

