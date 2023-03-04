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
		if (c < 10)
		{
			putchar (c + '0');
		}

		else
		{
			if (i == 10)
			{
				putchar ('a');
			}

			else if (i == 11)
			{
				putchar ('b');
			}

			else if (i == 12)
			{
				putchar ('c');
			}

			else if (i == 13)
			{
				putchar ('d');
			}

			else if (i == 14)
			{
				putchar ('e');
			}

			else if (i == 15)
			{
				putchar ('f');
			}
		}

		c++;
	}
	putchar ('\n');

	return (0);
}
