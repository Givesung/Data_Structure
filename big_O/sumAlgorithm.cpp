#include <iostream>

int AlgorithmA(const int &n)
{
    int sum=0;

    for(int i=1; i<=n; ++i)
        sum = n*(n+1)/2;

    return sum;
//O(1)
}
int AlgorithmB(const int &n)
{
    int sum=0;

    for(int i=1; i<=n; ++i)
        sum += i;

    return sum;
//O(n)
}
int AlgorithmC(const int &n)
{
    int sum=0;

    for(int i=1; i<=n; ++i)
        for(int j=1; j<=i; ++j)
            sum += 1;

    return sum;
//O(n^2)
}

int main()
{
    int n, A=0, B=0, C=0;

    printf("1부터 n까지의 합을 구하는 알고리즘입니다\n");
    printf("n의 값을 입력하세요(예: 50): ");
    scanf ("%d", &n);

    A = AlgorithmA(n);
    B = AlgorithmB(n);
    C = AlgorithmC(n);

    printf("A = %2d\nB = %d\nC = %d\n", A, B, C);
}
