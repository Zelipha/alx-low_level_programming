#include "main.h"
#include <stdlib.h>

/**
 * string_nconcat - Concatenates two strings using at
 *                  most an inputted number of bytes.
 * @s1: The first string.
 * @s2: The second string.
 * @n: The maximum number of bytes of s2 to concatenate to s1.
 *
 * Return: If the function fails - NULL.
 *         Otherwise - a pointer to the concatenated space in memory.
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	int i = 0, j = 0, size_1 = strlen(s1), size_2;

	n < (unsigned int) strlen(s2) ? (size_2 = n) : (size_2 = strlen(s2));
	new_string = (char *) malloc(size_1 + size_2 + 1);
	if (new_string != NULL)
	{
		for (; i < size_1; i++)
		{
			new_string[i] = s1[i];
		}
		for (; j < size_2; j++)
		{
			new_string[i + j] = s2[j];
		}
		new_string[i + j] = '\0';
	}
	else
	{
		return (NULL);
	}

	return (new_string);
}
