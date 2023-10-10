#include "search_algos.h"
// #include <math.h>
/**
  * jump_search - function that searches using jumpy search
  * @array: pointer
  * @size: size_t
  * @value: int
  * Return: index, -1, NULL
  */
int jump_search(int *array, size_t size, int value)
{
size_t i, jumpy, pas;
if (array == NULL || size == 0)
{
return (-1);
}
pas = sqrt(size);
for (i = jumpy = 0; jumpy < size && array[jumpy] < value;)
{
printf("Value checked array[%ld] = [%d]\n", jumpy, array[jumpy]);
i = jumpy;
jumpy += pas;
}
printf("Value found between indexes [%ld] and [%ld]\n", i, jumpy);
if (jumpy >= size)
{
jumpy = size - 1;
}
for (; i < jumpy && array[i] < value; i++)
{
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
}
printf("Value checked array[%ld] = [%d]\n", i, array[i]);
return (array[i] == value ? (int)i : -1);
}
