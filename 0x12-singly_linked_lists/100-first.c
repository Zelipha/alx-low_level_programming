#include <stdio.h>

/**
 * main - entry point
 *
 * Return: Always 0
 */
void __attribute__ ((constructor)) before_main()
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}
