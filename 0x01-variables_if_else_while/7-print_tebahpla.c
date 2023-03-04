#include <stdio.h>
/**
 * main - entry to thr program
 *
 * Description: prints the alphabet in reverse
 *
 * Return: Always 0 for successful execution
 */
int main(void)
{
	char c;

	for (c = 'z'; c >= 'a';)
	{
		putchar (c);

		c--;
	}
	putchar ('\n');
	return (0);
}
