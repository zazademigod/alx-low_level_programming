#include "main.h"
/**
 * print_last_digit - function name
 * @n: test subject
 * Return: 0 for correct
 */
int print_last_digit(int n)
{
	int c = n % 10;

	if (c < 0)
		c *= -1;
	{
		_putchar(c + '0');

		return (c);
	}

}
