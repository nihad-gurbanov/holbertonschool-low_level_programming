#include "main.h"

/**
 * prime_checker - checking the number for prime recursively
 *
 * @x: number for prime check
 * @y: base case first prime number
 *
 * Return: 1 if given number is prime, 0 otherwise
 */


int prime_checker(int x, int y)
{
	if (x == y)
	{
		return (1);
	}
	else if (x % y == 0)
	{
		return (0);
	}
	else
	{
		return (prime_checker(x, y + 1));
	}
}


/**
 * is_prime_number - checks the number if it is prime
 *
 * @n: given number to check for prime
 * Return: 1 if given number is prime, 0 otherwise
 */

int is_prime_number(int n)
{
	if (n < 2)
	{
		return (0);
	}
	else
	{
		return (prime_checker(n, 2));
	}
}
