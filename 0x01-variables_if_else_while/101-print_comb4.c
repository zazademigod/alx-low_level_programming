#include <stdio.h>
/**
 * main - entry to the program
 *
 * Description: this is a program to print possible
 * combination of single figures
 * without repeating any combination
 * Return: Always 0 for successful
 */
int main(void)
{
	int a;

	int b;

	int c;

	for (a = 0; a <= 9; a++)
	{
		for (b = a + 1; b <= 9; b++)
		{

			for (c = b + 1; c <= 9; c++)
			{
				putchar(a + '0');
				putchar(b + '0');
				putchar(c + '0');

				if (a < 7 || b < 8 || c < 9)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
