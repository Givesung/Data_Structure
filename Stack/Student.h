#include<cstdio>
#include<cstdlib>
#include<cstring>

class Student{
	static const int MAX_STRING = 100;

	int id;
	char name[MAX_STRING];
	char dept[MAX_STRING];

public:
	Student(int i = 0, const char n[] = "", const char d[] = ""){ set(i, n, d); }
	
	void set(int i, const char n[], const char d[]){
		id = i;
		strcpy(name, n);
		strcpy(dept, d);
	}

	void display(){
		printf("학번: %15d\n 이름: %10s\n 학과: %20s\n", id, name, dept);
	}
};
