//--------------------------------------------------------------------------------
// fibo-1_v2: redirect stdin to file
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>
#include <math.h>

typedef unsigned long long llu;

 llu fibonacci_1(int n)
 {
    // Binet formula
    double golden_ratio = (1 + sqrt(5)) / 2;
    return round(pow(golden_ratio, n) / sqrt(5));
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