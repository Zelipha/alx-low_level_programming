#include "main.h"
#include <string.h>
/**
* _strchr - Entry point
* Description - A function that locates a character in a string
* *@s: the function accepts an input saved into s
* *@c: the function accepts an input saved into c
* Return: Always 0
*/
char *_strchr(char *s, char c)
{
	int i = 0;

	while (s[i] >= '\0')

	{
		if (s[i] == c)
			return (&s[i]);
		i++;
	}
	return (NULL);
}
