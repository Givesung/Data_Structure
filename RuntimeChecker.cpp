#include <cstdio>
#include <cstdlib>
#include <ctime>
#include <math.h>

int main()
{
    unsigned long long int a=2, b=2;

    clock_t start, finish;
    double  duration;
    start = clock();
    //TODO: 시간 측정하고자 하는 알고리즘 작성, 출력문 제외
        pow(a, 2) + pow(b, 2);
    //
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("%f 초입니다\n", duration);
}
