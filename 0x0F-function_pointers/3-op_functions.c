#include "3-calc.h"

int op_add(int a, int b);
int op_sub(int a, int b);
int op_mul(int a, int b);
int op_div(int a, int b);
int op_mod(int a, int b);

/**
* op_add - function returns the sum of two numbers.
* @a: The first integer number.
* @b: The second integer number.
*
* Return: The sum of a and b.
*/

int op_add(int a, int b)
{
return (a + b);
}

/**
* op_sub - function returns the difference of two numbers.
* @a: The first integer number.
* @b: The second integer number.
*
* Return: The difference of a and b.
*/

int op_sub(int a, int b)
{
return (a - b);
}

/**
* op_mul - function returns the product of two numbers.
* @a: The first integer number.
* @b: The second integer number.
*
* Return: The product of a and b.
*/

int op_mul(int a, int b)
{
return (a * b);
}

/**
* op_div - function returns the division of two numbers.
* @a: The first integer number.
* @b: The second integer number.
*
* Return: The quotient of a and b.
*/

int op_div(int a, int b)
{
return (a / b);
}

/**
* op_mod - function returns the remainder of the division of two numbers.
* @a: The integer first number.
* @b: The second integer number.
*
* Return: The remainder of the division of a by b.
*/

int op_mod(int a, int b)
{
return (a % b);
}
