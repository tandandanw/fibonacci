//--------------------------------------------------------------------------------
// fibo: finish fobo
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>
#include <time.h>
#include <assert.h>

typedef unsigned long long llu;

 llu fibonacci(llu n, double* seconds, int times)
 {
     assert(n > 1);
     clock_t start, end;
     llu fi, bo, temp;
     for (int i = 0; i < times; ++i)
     {
         start = clock();
         fi = 0, bo = 1;
         for (int j = 1; j < n; ++j) 
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
        int testdata; scanf("%d", &testdata);
        double seconds = 0;
        llu result = fibonacci((llu)testdata, 
                                &seconds, 
                                test_times);
        printf("f(%d) = %llu\n> %.2lf s\n", testdata, result, seconds);
    }

    return 0;
}