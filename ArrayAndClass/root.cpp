#include <cstdio>
#include <cmath>

int* two(const int &n, const int &len)
{
    static int two[10];

    for(int i=0; i<=len; ++i){
        two[i] = pow(n, i);
    }

    return two;
}

int main()
{
    const int len=10;
    const int n  =2;
    int* root;

    root = two(n ,len);

    for(int i=0; i<=len; ++i)
        printf("2 ^ %2d : %4d\n", i, root[i]);

    return 0;
}
