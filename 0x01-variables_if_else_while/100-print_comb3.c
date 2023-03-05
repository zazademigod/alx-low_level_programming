#include <stdio.h>
/**
 * main - this is the entry of the program
 *
 * Description: this prigranm prints possible combinations for double figures
 *
 * Return: Always return 0 for successful execution
 */

int main(void)
{
	int a;

	int c;

	for (a = 0; a <= 9; a++)
	{

		for (c = a + 1; c <= 9; c++)
		{
			putchar(a + '0');
			putchar(c + '0');

			if (a < 8 || c < 9)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
