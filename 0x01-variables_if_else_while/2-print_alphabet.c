#include <stdio.h>
/**
 * main - Entry point into program
 * Description: This is a program that prints the alphabet in lower case
 * Return: Always 0 (Succes)
 */
int main(void)

{
	char c = 'a';

	while (c <= 'z')
	{
	putchar(c);
	c++;
	}
	putchar('\n');
	return (0);
}
