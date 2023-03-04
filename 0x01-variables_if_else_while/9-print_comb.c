#include <stdio.h>

/**
 * main - entry of the program
 *
 * Description: to print numbers with commas
 *
 * Return: Always 0 for succesful execution
 */

int main(void)
{
	int c;

	for (c = 0; c <= 9;)
	{
		putchar (c + '0');

		if (c < 9)
		{
			putchar (',');
			putchar (' ');
		}
		c++;
	}
	putchar ('\n');
	return (0);
}
