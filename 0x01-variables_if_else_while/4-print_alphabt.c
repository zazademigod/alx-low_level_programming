#include <stdio.h>

/* main - this is the entry of tr progrsm
 *
 * Description: to print alphabets except q and e
 *
 * Return: 0 if the program is successful
 * Non-zero if an error occours
 */
int main(void)
{
	char demo;

	for (demo = 'a'; demo <= 'z';)
	{

		if (demo != 'q' && demo != 'e')
		{
			putchar(demo);
		}

	demo++;

	}

	putchar ('\n');

	return (0);
}
