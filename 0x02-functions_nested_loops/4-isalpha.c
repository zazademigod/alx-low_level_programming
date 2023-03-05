#include "main.h"
/**
 * _isalpha(int c) - this is the function
 * Return: print 1 for success
 * print 0 for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') ||
		(c >= 'A' && c <= 'Z'))
	{
		return (1);
	}

	return (0);
}
