#include <stdio.h>
#include <stdlib.h>

/**
 * main - Adds positive numbers.
 *
 * @argc: Number of arguments passed.
 * @argv: Array of pointers to arguments.
 *
 * Return: Always 0.
 */
int main(int argc, char *argv[])
{
	int i, sum = 0;

	for (i = 1; i < argc; i++)
	{
		if (atoi(argv[i]))
		{
			sum += atoi(argv[i]);
		}
		else if ((atoi(argv[i])) < '0' || (atoi(argv[i])) > '9')
		{
			printf("Error\n");
			return (1);
		}
	}

	printf("%d\n", sum);
	return (0);
}
