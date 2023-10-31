#include "main.h"

/**
 * sqrt_checker - finds square root if exist
 *
 * @x: given number to find square root of it
 * @y: base case for recursion
 * Return: square root of given number
 */


int sqrt_checker(int x, int y)
{
	if (y * y == x)
	{
		return (y);
	}
	else if (y * y > x)
	{
		return (-1);
	}
	else
	{
		return (sqrt_checker(x, y + 1));
	}
}


/**
 * _sqrt_recursion - returns the natural square root of a number
 *
 * @n: number argument
 * Return: square root of given number
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (sqrt_checker(n, 0));
	}
}
