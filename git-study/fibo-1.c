//--------------------------------------------------------------------------------
// fibo-1: finish fibo-1
// Copyright (c) tandandan
//-------------------------------------------------------------------------------

#include <stdio.h>
#include <time.h>
#include <assert.h>
#include <math.h>

typedef unsigned long long llu;

 llu fibonacci(llu n, double* seconds, int times)
 {
     assert(n > 2);
     clock_t start, end;
     llu result = 0;
     for (int i = 0; i < times; ++i)
     {
         start = clock();
         // Binet formula
         double golden_ratio = (1 + sqrt(5)) / 2;
         result = round(pow(golden_ratio, n) / sqrt(5));
         end = clock();
         *seconds += (double)(end - start)/CLOCKS_PER_SEC;
     }
     *seconds /= times;
     return result;
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