#include <iostream>
#include <cstdio>

int main()
{
    int mat[2][3]{
        {1, 2, 3},
        {4, 5, 6}
    };
    int rows = sizeof mat / sizeof mat[0];  // mat== 배열전체의 크기 24, mat[0]->int[cols]의 크기 12 => 2
    int cols = sizeof mat[0] / sizeof(int); // 12/4 => 3

    int transposeMat[cols][rows];

    for(int i=0; i<rows; ++i)
        for(int j=0; j<cols; ++j)
            transposeMat[j][i] = mat[i][j];

    for(int i=0; i<rows; ++i){
        for(int j=0; j<cols; ++j)
            printf("%d", transposeMat[i][j]);
        printf("\n");
    }

    return 0;
}
