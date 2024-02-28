#include <stdlib.h>
#include <time.h>

double mx_timer(void(*f)()){
    if (f == NULL)
        return -1;
    clock_t begin = clock();
    if (begin == (clock_t) (-1))
        return -1;
    f();
    clock_t end = clock();
    if (end == (clock_t) (-1))
        return -1;
    return (double)(end - begin) / (double) CLOCKS_PER_SEC;
}


