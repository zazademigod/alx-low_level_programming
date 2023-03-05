#include "main.h"
/**
 * main - program entry
 * Description: program to print the lowercase 
 * with void print as prototype
 * Return: Always 0 for success
 */
void print_alphabet(void)
{
	char c;

	for (c = 'a'; c <= 'z';)
	{
		_putchar(c);
		c++;
	}
	_putchar('\n');

}
