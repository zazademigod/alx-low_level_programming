#include "main.h"

/**
 * print_sign - entry of function
 * @n: to be checked
 * Description: function that prints the sign of a number
 * Return: print 1 if positive, 0 for neutral
 * and -1 for negative
 */

int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n == 0)
	{
		_putchar(0);
		return (0);
	}
	else
	{
		_putchar('-');
		return (-1);
	}
}
