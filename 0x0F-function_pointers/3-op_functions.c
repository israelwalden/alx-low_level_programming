#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 *op_add - adds integers
 *@a: int variable
 *@b: int variable
 * Return: int sum
 */

int op_add(int a, int b)
{
	return (a + b);
}


/**
 *op_sub - subtracts integers
 *@a: int variable
 *@b: int variable
 * Return: int diference
 */
int op_sub(int a, int b)
{
	return (a - b);
}


/**
 *op_mul - multiplies integers
 *@a: int variable
 *@b: int variable
 * Return: int product
 */
int op_mul(int a, int b)
{
	return (a * b);
}


/**
 *op_div - divids integers
 *@a: int variable
 *@b: int variable
 * Return: int quotient
 */
int op_div(int a, int b)
{
	return (a / b);
}


/**
 *op_mod - modulo integers
 *@a: int variable
 *@b: int variable
 * Return: int remainder
 */
int op_mod(int a, int b)
{
	return (a % b);
}
