#include <stdio.h>
/**
 * main -entry of thr program
 *
 * Description: to print two two digit numbers
 *
 * Return: Always 0 for sucessful
 */
int main(void)
{
	int a;

	int b;

	for (a = 0; a < 100; a++)
	{

		for (b = a + 1; b < 100; b++)
		{
			putchar((a / 10) + '0');
			putchar((a % 10) + '0');
			putchar(' ');
			putchar((b / 10) + '0');
			putchar((b % 10) + '0');

			if (a != 98 || b != 99)
			{
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
