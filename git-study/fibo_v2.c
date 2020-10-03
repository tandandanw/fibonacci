//--------------------------------------------------------------------------------
// fibo_v2: redirect stdin to file input
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
    if (args > 1) freopen(argv[1], "r", stdin);

    int testdata_num;
    scanf("%d", &testdata_num);
    while (testdata_num--)
    {
        int testdata; scanf("%d", &testdata);
        double seconds = 0;
        llu result = fibonacci(testdata);
        printf("f(%d) = %llu\n", testdata, result);
    }

    return 0;
}