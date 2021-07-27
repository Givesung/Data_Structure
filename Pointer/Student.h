#include<cstdio>

class Student
{
	int 	id;
	char* name;
	char* dept;

public:
	Student(int i, char* n, char* d)
	: id(i), name(n), dept(d) {}

	void setStudent(int i, char* n, char* d)
	{
		id   = i;
		name = n;
		dept = d;
	}

	void display()
	{
		printf("ID: %d  Name: %s Dept: %s", id, name, dept);
	}
};
