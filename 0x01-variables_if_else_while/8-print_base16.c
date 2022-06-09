#include <stdio.h>
/**
 ** main - Prints numbers 0 to 9.
 ** Return: Always 0 (success)
**/
int main(void)
{
	int i;

	for (i = 0; i < 16; i++)
	{
		putchar("%i", i);
	}
		putchar('\n');
	return (0);
}
