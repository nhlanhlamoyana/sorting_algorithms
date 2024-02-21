#include "sort.h"

/**
 * swap_ints - Two integers to be swapped in an array.
 * @a: First integer to be swapped.
 * @b: Second integer to be swapped.
 */
void swap_ints(int *a, int *b)
{
	int tmp;	

	tmp = *a;
	*a = *b;
	*b = tmp;

}

/**
 * bubble_sort - An array of integers to be sorted in ascending order.
 * @size: Size of the array.
 * @ array: The array of integers to sort.
 *
 * Description: The array gets printedd after each swap.
 */
void bubble_sort(int *array, size_t size)
{
	size_t i, len = size;
	bool bubbly = false;

	if (array == NULL || size < 2)
		return;

	while (bubbly == false)
	{
		bubbly = true;
		for (i = 0; i < len - 1; i++)
		{
			if (array[i] > array[i + 1])
			{
				swap_ints(array + i, array + i + 1);
				print_array(array, size);
				bubbly = false;
			}
		}
		len--;
	}
}
