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
			if (c == 10)
			{
				putchar ('a');
			}

			else if (c == 11)
			{
				putchar ('b');
			}

			else if (c == 12)
			{
				putchar ('c');
			}

			else if (c == 13)
			{
				putchar ('d');
			}

			else if (c == 14)
			{
				putchar ('e');
			}

			else if (c == 15)
			{
				putchar ('f');
			}
		}

		c++;
	}
	putchar ('\n');

	return (0);
}
