#include <stdbool.h>
#include <stdio.h>

void mx_sort(int*arr, int size, bool(*f)(int, int))
{
    if (f == NULL || arr == NULL || size < 1)
        return;
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j < size - i - 1; j++)
        {
            if (f(arr[j], arr[j+1]))
            {
                int t = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = t;
            }
        } 
    }
}

