#include<cstdio>

int** alloc2DInt(int rows, int cols)
{
	if(rows <= 0 || cols <= 0) return NULL;

	int** mat = new int* [rows];
	for(int i=0; i<rows; ++i)
		mat[i] = new int[cols];
	return mat;
}

void free2DInt(int **mat, int rows, int cols=0)
{
	if(mat != NULL){
		for(int i=0; i<rows; ++i){
			delete[] mat[i];
		delete[] mat;
		}
	}
}
