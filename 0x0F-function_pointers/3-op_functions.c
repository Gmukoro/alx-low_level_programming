#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
  * op_add - A function that adds two numbers
  * @a: 1st numb
  * @b: 2nd numb
  *
  * Return: Sum
  */
int op_add(int a, int b)
{
	return (a + b);
}

/**
  * op_sub - A funct that subtracts two numbs
  * @a: 1st number
  * @b: 2nd number
  *
  * Return: The difference
  */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
  * op_mul - A funct that multiplies two numbs
  * @a: 1st numb
  * @b: 2nd numb
  *
  * Return: The product
  */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
  * op_div - A prog that divides two numbs
  * @a: 1st numb
  * @b: 2nd numb
  *
  * Return: The solution
  */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a / b);
}

/**
  * op_mod - A funct that returns the remainder of div
  * @a: Int1
  * @b: Int2
  *
  * Return: Remainder
  */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
