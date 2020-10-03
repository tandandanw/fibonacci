//--------------------------------------------------------------------------------
// fibo_v3: add timer and multi-times calculation
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>
#include <time.h>

typedef unsigned long long llu;

 llu fibonacci(llu n, double* seconds, int times)
 {
     clock_t start, end;
     llu fi, bo, temp;
     for (int i = 0; i < times; ++i)
     {
         start = clock();
         fi = 0, bo = 1;
         for (llu j = 2; j < n; ++j) 
         {
            temp = bo;
            bo = fi + bo;
            fi = temp;
         }
         end = clock();
         *seconds += (double)(end - start)/CLOCKS_PER_SEC;
     }
     *seconds /= times;
     return bo;
 }

int main(int args, char *argv[])
{
    if (args > 1) freopen(argv[1], "r", stdin);

    int testdata_num;
    int test_times;
    scanf("%d %d", &testdata_num, &test_times);
    while (testdata_num--)
    {
        llu testdata; scanf("%llu", &testdata);
        double seconds = 0;
        llu result = fibonacci(testdata, 
                                &seconds, 
                                test_times);
        printf("f(%llu) = %llu\n> %.2lf s\n", testdata, result, seconds);
    }

    return 0;
}