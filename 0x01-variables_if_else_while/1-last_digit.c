#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - Entry point
 * Description: A program that assign random numbers to the variable n
 * . Each time its executed
 *
 * Return: 0 Always (Success)
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2
	
	int m;
	m = n % 10;
	if (m > 5)
		printf("Last digit of%d is %d and is greater than 5\n", n, m);
	if (m == 0)
		printf("Last digit of %d is %d and is 0\n", n, m);
	if (m < 6 && m != 0)
		printf("Last digit of %d is %d and less than 6 and not 0\n", n, m);
	return (0);
}
	
