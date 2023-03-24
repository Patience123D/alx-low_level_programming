#include "3-calc.h"
int op_add(int c, int d);
int op_sub(int c, int d);
int op_mul(int c, int d);
int op_div(int c, int d);
int op_mod(int c, int d);

/**
 *op_add - Returns the sum
 *@c: number one
 *@d: number two
 *Return: c+d
 *op_sub - Returns the difference of two numbers
 */
int op_add(int c, int d)
{
	return (c + d);
}
/**
 * op_sub - Returns the difference of two numbers
 * @c: first number
 * @d: second number
 * Return: the difference of c and d
 */
int op_sub(int c, int d)
{
	return (c - d);
}
/**
 * op_mul - Returns the product of two numbers
 * @c: 1st number
 * @d: 2nd number
 * Return: c*d
 */
int op_mul(int c, int d)
{
	return (c * d);
}
/**
 * op_div - Returns the division of two numbers
 * @c: 1st number
 * @d: 2nd number
 * Return: c/d
 */
int op_div(int c, int d)
{
return (c / d);
}
/**
* op_mod - Returns the remainder of the division of two numbers.
* @c: The first number
* @d: The second number
* Return: The remainder of the division
*/
int op_mod(int c, int d)
{
return (c % d);
}
