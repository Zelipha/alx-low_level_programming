#include "search_algos.h"

/**
  * linear_search - Searches for a value in an array of integers
  * @array: A pointer to the first element of the array to search
  * @size: Number of elements in @array
  * @value: Value to search for
  * Return: index at which value's found
  */
int linear_search(int *array, size_t size, int value)
{
	size_t i;

	if (!array)
		return (-1);

	i = 0;
	while (i < size)
	{
		printf("Value checked array[%lu] = [%d]\n", i, array[i]);
		if (array[i] == value)
			return (i);
		i++;
	}
	return (-1);
}
