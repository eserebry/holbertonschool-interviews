#include "search_algos.h"

/**
 * binary_search -  searches for a value in a
 * sorted array of integers using the Binary search algorithm
 *
 * @array: pointer to the first element of the array
 * @size: size of the array
 * @value: element of the array we are looking for
 *
 * Return: index of the found element
 */
int binary_search(int *array, size_t size, int value)
{
	size_t  i, low, high, med;

	if (array == NULL || size == 0)
		return (-1);
	low = 0;
	high = size - 1;
	while (low <= high)
	{
		printf("Searching in array: ");
		for (i = low; i <= high; i++)
		{
			if (i == high)
				printf("%d\n", array[i]);
			else
				printf("%d, ", array[i]);
		}
		med = (low + high) / 2;
		if (array[med] == value)
			return (med);
		if (array[med] < value)
			low = med + 1;
		else
			high = med;
	}
	return (-1);
}
