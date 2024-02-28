#include <stdbool.h>
#include <stdlib.h>

int mx_comparator(const int*arr, int size, int x, bool(*compare)(int, int))
{
    if(size < 1 || arr == NULL || compare == NULL)
        return -1;
    for (int i = 0; i < size; i++)
    {
        if(compare(arr[i],x))
            return i;
    }
    return -1;
}

