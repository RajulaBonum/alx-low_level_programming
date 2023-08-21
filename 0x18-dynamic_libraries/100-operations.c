#include <stdio.h>

/**
 * Math functions
 * Coded in c but to be used in python programm
 * Dynamic libraries to be used
 */

int add(int a, int b)
{
	int result = a + b;
	return (result);
}

int sub(int a, int b)
{
	int result = a - b;
	return (result);
}

int mul(int a, int b)
{
	int result = a * b;
	return (result);
}

int div(int a, int b)
{
	int result = a / b;
	return (result);
}

int mod(int a, int b)
{
	int result = a % b;
	return (result);
}
