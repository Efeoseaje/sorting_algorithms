#include "sort.h"

/**
 * bubble_sort - sorts an array in ascending order.
 * @array: The array to be sorted
 * @size: The size of the array to be sorted.
 * 
 * Return: 0
*/

void bubble_sort(int *array, size_t size)
{
	size_t i, j, flag;
	int temp;

	for (i = 0; i < size - 1; i++)
	{
		flag = 0;
		{
			for (j = 0; j < size - 1 - i; j++)
			{
				if (array[j] > array[j + 1])
				{
					temp = array[j];
					array[j] = array[j + 1];
					array[j + 1] = temp;
					print_array(array, size);
					flag = 1;
				}
			}
		}
		if (flag == 0)
			break;
	}
}
