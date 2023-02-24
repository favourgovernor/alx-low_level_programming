#include "main.h"

/**
 * largest_number - returns the largest of 3 numbers
 * @num1: first integer
 * @num2: second integer
 * @num3: third integer
 * Return: largest number
 */

int largest_number(int num1, int num2, int num3);

/**
 * largest_number - return max
 * @num1: the first number
 * @num2: the second number
 * @num3: the third number
 * Return: the largest number
 */

int largest_number(int a , int b, int c)
{
	int largest;

	if(a >= b && a >= c)
	{
	largest = a;
	}
	else if (b >= a && b >= c)
	{
	largest = b;
        else
	{
	largest = c;	
	}
        return (largest);
}
