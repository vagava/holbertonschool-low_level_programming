#include "function_pointers.h"
/**
 * array_iterator - print an array
 * @array: elements to print
 * @size: size of array
 * @action: action to print
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array && size && action)
		for (i = 0; i < size; i++)
		{
			action(array[i]);
		}

}
