#include <stdio.h>
/**
 ** main - Entry point
 ** Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 48; num <= 57; num++)
	{
		putchar(num);
		putchar(num);

		for (num == 57)
		{
			break;
		}
		putchar(',');
		putchar(' ');

		putchar(',');
		putchar(' ');
	}
	putchar('\n');

	return (0);
}
