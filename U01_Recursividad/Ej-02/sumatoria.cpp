#include "sumatoria.h"


int sumatoria(int *arr, unsigned int size) {
    if(size==1)
    {
        return arr[0];
    }
    else
    {
        return sumatoria(arr+1,--size)+arr[0];
    }
}