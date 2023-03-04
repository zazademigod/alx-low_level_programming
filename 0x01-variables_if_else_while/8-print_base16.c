#include <stdio.h>
/**
 * main - entry to the program
 *
 * Description: to print hexadecimals
 *
 * Return: Always 0 for successful
 */

int main(void)
{
	char c;

	char d;

	for (c = 0; c < 10;)
	{
		putchar (c + '0');
		c++;
	}

	for (d = 'a'; d <= 'f';)
	{
		putchar (d);
		d++;
	}

	putchar ('\n');

	return (0);
}
