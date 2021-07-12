#include<cstdio>
#include<stdlib>

inline void error(const char* message)
{
	printf("%s", message);
	exit(1);
}

class OperandStack
{
	const int MAX_STACK_SIZE = 100;

	double data[MAX_STACK_SIZE];
	int top;
public:
	OperandStack(){ top = -1; }
	~OperandStack(){}
	bool isEmpty(){ return top == -1; }
	bool isFull() { return top == MAX_STACK_SIZE - 1; }
	void push(double x){
		if(isFull()){
			error();
		}
		data[++top] = x;
	}
	double pop(double x){
		if(isEmpty()){
			error();
		}
		return data[--top];
	}
};
