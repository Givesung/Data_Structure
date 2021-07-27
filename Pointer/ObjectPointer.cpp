#include<cstdio>

struct MyStruct{
	int i;
	float f;
};

int main()
{
	MyStruct s, *ps;

	ps = &s;
	ps->i = 2;
	ps->f = 3.14;


	printf("%d, %f", s.i, s.f);
	return 0;
}
