#include <stdio.h>
/**
 * main - ths is the entry to thr program
 *
 * Description: this prints digit from 0-9
 *
 * Return: Always 0 for success
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9;)
	{
		putchar(c + '0');

		c++;
	}
	putchar('\n');

	return (0);
}
