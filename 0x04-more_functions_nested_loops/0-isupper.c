#include <stdio.h>
#include "main.h"

/**
 * _isupper - entry point
 * @c: character to check
 * Description: checks for uppercase character
 * Return: 0
*/
int _isupper(int c)
{
	if (c >= 'A' && c <= 'Z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
