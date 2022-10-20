#include "main.h"

/**
 * _isdigit - checks for checks for a digit 
 * @c: c -  Variable
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
	int y = 0;

	if (c >= '48' && c <= '57')
		y = 1;

	return (y);
}
