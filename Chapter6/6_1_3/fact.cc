#include <iostream>
#include "Chapter6.h"

int fact(int i)
{
    int result = 1, j = 1;
    while(j <= i)
    {
        result *= j++;
    }
    return result;
}