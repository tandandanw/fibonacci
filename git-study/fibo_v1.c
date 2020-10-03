//--------------------------------------------------------------------------------
// fibo_v1: add single argument implementation
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>

typedef unsigned long long llu;

llu fibonacci(int n)
{
    llu fi, bo, temp;
    fi = 0, bo = 1;
    for (int j = 2; j < n; ++j) 
    {
    temp = bo;
    bo = fi + bo;
    fi = temp;
    }
    return bo;
}

int main(int args, char *argv[])
{
    int testdata; scanf("%d", &testdata);
    llu result = fibonacci(testdata);
    printf("f(%d) = %llu\n", testdata, result);
    return 0;
}