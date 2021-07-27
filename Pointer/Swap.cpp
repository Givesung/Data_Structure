#include<cstdio>

void Swap(int *px, int *py)
{
	int tmp;
	tmp = *px;
	*px = *py;
	*py = tmp;
}

int main()
{
	int a=1, b=2;
	printf("Swap을 하기 전: %d %d\n", a, b);
	Swap(&a, &b);
	printf("Swap을 한 후  : %d %d", a, b);

	return 0;
}

