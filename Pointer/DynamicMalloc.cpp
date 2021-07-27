#include<cstdio>

int main()
{
	char *str;

	str = new char[1000];

	if(str == NULL)
		printf("Insuffcient memory available\n"):
	else{
		printf("Allocate 1000 bytes\n");
		delete [] str;
		printf("Memory freed\n");
	}

	return 0;
}
