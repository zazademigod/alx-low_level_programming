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

	for (c = 0; c < 16;)
	{
		putchar (c + '0');

		c++;
	}
	putchar ('\n');

	return (0);
}
