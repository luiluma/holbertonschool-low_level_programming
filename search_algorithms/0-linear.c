#include "search_algos.h"

/**
 * linear_search -  function that searches for a value in an array of integers
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: -1 if value is not present or array is NULL, otherwise the index
 */

int linear_search(int *array, size_t size, int value)
{
	size_t index;
	char messages[] = "Value checked array";

	if (array)
	{
		for (index = 0; index < size; index++)
		{
			printf("%s[%ld] = [%d]\n", messages, index, array[index]);
			if (value == array[index])
				return (index);
		}
	}
	return (-1);
}
