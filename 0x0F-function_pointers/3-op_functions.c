#include "3-calc.h"

int op_addition(int a, int b);
int op_subtraction(int a, int b);
int op_multiply(int a, int b);
int op_divide(int a, int b);
int op_modulus(int a, int b);

/**
 * op_addition - Returns the sum of two numbers
 * @a: The first number.
 * @b: The second number.
 * Return: The sum of a and b.
 */

int op_addition(int a, int b)
{
	return (a + b);
}

/**
 * op_subtraction - Returns the difference of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The difference of a and b.
 */
int op_subtraction(int a, int b)

{
	return (a - b);
}

/**
 * op_multiply - Returns the product of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The product of a and b.
 */
int op_multiply(int a, int b)
{
	return (a * b);
}

/**
 * op_divide - Returns the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The quotient of a and b.
 */

int op_divide(int a, int b)
{
	return (a / b);
}
/**
 * op_modulus - Returns the remainder of the division of two numbers.
 * @a: The first number.
 * @b: The second number.
 * Return: The remainder of the division of a by b.
 */
int op_modulus(int a, int b)
{
	return (a % b);
}
