#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: single digits of base 10 starting from 0 using putchar
 * Return: 0
*/
int main(void)
{
	int s;

	for (s = 0; s < 10; s++)
	{
		putchar(s + '0');
	}
	putchar('\n');
	return (0);
}
