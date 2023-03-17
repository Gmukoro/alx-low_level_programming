#include <stdio.h>
/**
 * main - A C program that prints various sizes of computer
 *
 * Return: 0 (success)
 */
int main(void)
{
	char p;
	int q;
	long int s;
	long long int t;
	float x;

	printf("Size of a char:%lu byte(s)\n", (unsigned long)(p));
	printf("Size of a int:%lu byte(s)\n", (unsigned long)sizeof(q));
	printf("Size of a long int:%lu byte(s)\n", (unsigned long)sizeof(s));
	printf("Size of a long long int:%lu byte(s)\n", (unsigned long)sizeof(t));
	printf("Size of a float:%lu byte(s)\n", (unsigned long)sizeof(x));
	return (0);

}
