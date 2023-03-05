#include "main.h"
/**
 * _isalpha - this is the function
 * @c: the value to test
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
