#include <stdio.h>
/**
 ** main - Entry point
 ** Return: Always 0 (Success)
**/
int main(void)
{
	int num;

	for (num = 0; num <= 30; num++)
	{
		putchar(num);

		putchar(num == 30);
		{
			break;
		}
		putchar(',');
	}
	putchar('\n');

	return (0);
}
