//--------------------------------------------------------------------------------
// fibo_v0: create empty framework
// Copyright (c) tandandan
//--------------------------------------------------------------------------------

#include <stdio.h>

int fibonacci(int n)
{
    return -1;
}

int main(int args, char *argv[])
{
    int n; scanf("%d", &n);
    int result = fibonacci(n);
    printf("%d", result);

    return 0;
}