#include <cstdio>
#include <cstdlib>
#include <ctime>

int main()
{
    clock_t start, finish;
    double  duration;
    start = clock();
    //TODO: 시간 측정하고자 하는 알고리즘 작성, 출력문 제외
    //
    finish = clock();
    duration = (double)(finish - start) / CLOCKS_PER_SEC;
    printf("%f 초입니다\n", duration);
}
