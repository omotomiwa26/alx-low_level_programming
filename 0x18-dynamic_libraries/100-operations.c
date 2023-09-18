#include <stdio.h>
/**
 * add - Functions adds two numbers.
 * @a: Num1.
 * @b: Num2.
 * Return: result.
 */
int add(int a, int b)
{
	return (a + b);
}
/**
 * sub - Function substracts two numbers.
 * @a: Num1.
 * @b: Num2
 * Return: result.
 */
int sub(int a, int b)
{
	return (a - b);
}
/**
 * mul - Function multiplies two numbers.
 * @a: Num1.
 * @b: Num2.
 * Return: result.
 */
int mul(int a, int b)
{
	return (a * b);
}
/**
 * div - Function divides two numbers.
 * @a: Num1.
 * @b: Num2.
 * Return: result.
 */
int div(int a, int b)
{
	if (b == 0)
	{
		printf("Error: divide by a number greater than zero");
	}
	else
	{
		return (a / b);

	}

}
/**
 * mod - Function returns the remainder of two numbers
 * @a: Num1.
 * @b: Num2.
 * Return: result.
 */
int mod(int a, int b)
{
	return (a % b);
}
