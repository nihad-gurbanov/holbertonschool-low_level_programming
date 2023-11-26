#include <stdio.h>
#include "3-calc.h"

/**
 * op_add - returns sum of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: sum of given int arguments
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - returns the difference of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: difference of given int arguments
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - returns the product of a and b
 * @a: first int argument
 * @b: second int argument
 * Return: product of given int arguments
 */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div - returns division of a by b
 * @a: first int argument
 * @b: second int argument
 * Return: division of a by b arguments
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 * op_mod - returns reminder of the division of a by b
 * @a: first int argument
 * @b: second int argument
 * Return: reminder of the division of a by b arguments
 */

int op_mod(int a, int b)
{
	return (a % b);
}

