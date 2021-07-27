#include<cstdio>

void foo(int a)
{
	printf("foo: %d\n", a);
}

int main()
{
	void (*f)(int);

	f = foo;
	f(10);
	(*f)(10);
}
