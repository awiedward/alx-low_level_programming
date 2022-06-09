#include <stdio.h>
/**
 ** main - Entry point
 ** Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 20; num <= 100; num++)
	{
		putchar(num);

		putchar(num == 100);
		{
			break;
		}
		putchar(',');
	}
	putchar('\n');

	return (0);
}
