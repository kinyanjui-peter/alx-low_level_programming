#include "search_algos.h"
/**
 * binary_search -  function that searches for a value in a sorted
 * array of integers using the Binary search algorithm
 * @array: pointer to the first element of the array to search
 * @size: number of elements in array
 * @value: the value to search for
 * Return:  index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	size_t low = 0;
	size_t high = size - 1;
	size_t mid;

	/* middle number */
	while (low <= high)
	{
		printf("Searching in array: \n");
		mid = (low + high)/2;
		if (value == array[mid])
		{
			return mid;
		}
		else if (value < array[mid])
		{
			high = mid - 1;
		}
		else
		{
			low = mid + 1;
		}
	}
	return -1;
}
