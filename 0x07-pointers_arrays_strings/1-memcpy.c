#include "main.h"
/**
* _memcpy - Entry point
* Description - A function that copies memory area
* *@dest: the function accepts an input saved into dest
* *@src: the function accepts an input saved into src
* *@n: the function accepts an input saved into n
* Return: 0;
*/
char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = src[i];
		i++;
	}

	return (dest);
}
