#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 ** main - Determines either greater than 5, is less than 6, or is 0
 ** Return: Always 0 (Success)
**/
int main(void)
{
	int n, l;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	I = n % 10;
	if (I > 5)
	{
		printif("Last digit of %d is %d and is greater than 5\n", n, l);
	}
	else if (I == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, l);
	}
	return (0);
}
