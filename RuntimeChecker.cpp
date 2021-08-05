#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
    clock_t start, finish;
    double  duration;
    start = clock();
    int sum=0, n=400000;

    for(int i=1; i<=n; ++i)
        sum = n*(n+1)/2;

    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("%f 초입니다\n", duration);
}
