#include <stdio.h>

/**
 * main - print a half pyramid of "*"
 *
 * Return: Always 0
 */
int main(void)
{
	int row, column;

	for (column = 1; column <= 5; column++)
	{
		for (row = 1; row <= column; row++)
		{
			printf("*");
		}
		putchar('\n');
	}
	return (0);
}
