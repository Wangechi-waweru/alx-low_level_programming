#include "3-calc.h"

/**
  * op_add - calculates the sum of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: sum of a and b.
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - calculates the difference of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: difference of a and b.
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - calculates the product of two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: product od a and b.
  */

int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - returns the result of the division of two integers
  * @a: first integer.
  * @b: second integer.
  *
  * Return: results of the division between a and b.
  */

int op_div(int a, int b)
{
	return (a / b);
}

/**
  * op_mod - returns the remainder of division between two integers
  * @a: first integer
  * @b: second integer
  *
  * Return: returns the remainder of the division of a by b.
  */
int op_mod(int a, int b)
{
	return (a % b);
}
