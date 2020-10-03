//--------------------------------------------------------------------------------
// fibo-1_v1: add binet formula implementation
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

int fibonacci_1(int n)
{
    // Binet formula
    double golden_ratio = (1 + sqrt(5)) / 2;
    return round(pow(golden_ratio, n) / sqrt(5));
}

int main(int args, char *argv[])
{
    int testdata; scanf("%d", &testdata);
    int result = fibonacci(testdata);
    printf("f(%d) = %d\n", testdata, result);
    return 0;
}