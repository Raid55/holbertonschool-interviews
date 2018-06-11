#include "search_algos.h"

/**
 * binary_search - binary search
 * @array: array to search
 * @size: size of @array
 * @value: value to find index
 *
 * Return: -1 on fail or index
 */
int binary_search(int *array, size_t size, int value)
{
	int i;
	int m;
	int s = 0;
	int e = (int)size - 1;

	if (array == NULL)
		return (-1);

	while (s <= e)
	{
		i = s;
		printf("Searching in array: ");
		while (i <= e)
			if (i == e)
				printf("%d", array[i++]);
			else
				printf("%d, ", array[i++]);

		printf("\n");

		m = ((e - s) / 2) + s;

		if (array[m] == value)
			return (m);
		else if (array[m] < value)
			s = m + 1;
		else
			e = m;
	}

	return (-1);
}
