#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/**
 * main - entry point
 * Description: prints single digits of base 10 starting from 0
 * Return: 0
*/
	int main(void)
{

	int s = 0;

	for (s = 0; s < 10; s++)
	{
		printf("%d", s);
	}
	putchar('\n');
	return (0);
}
