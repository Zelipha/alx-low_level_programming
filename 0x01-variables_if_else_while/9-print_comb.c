#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description:  prints all possible combinations of single-digit numbers
 * Return: 0
*/
int main(void)
{
	int n;

	for (n = 0; n < 10; n++)
	{
		putchar(n + '0');
		putchar(',');
	}
	putchar('\n');
	return (0);
}
