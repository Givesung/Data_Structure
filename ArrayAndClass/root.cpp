#include <cstdio>
#include <cmath>

int* two(const int &len)
{
    static int two[10];

    for(int i=0; i<=len; ++i){
        two[i] = pow(2, i);
    }

    return two;
}

int main()
{
    const int len=10;
    int* root;

    root = two(len);

    for(int i=0; i<=len; ++i)
        printf("2 ^ %2d : %4d\n", i, root[i]);

    return 0;
}
