#include<cstdio>
#include<cstdlib>

inline void error(const char *message){
	printf("%s\n", message);
	exit(1);
}

class ArrayStack{
	static const int MAX_STACK_SIZE = 5000;

	int top;
	int x;
	int data[MAX_STACK_SIZE];
public:
	ArrayStack(){ top = -1; }
	~ArrayStack(){}
	bool isEmpty(){ return top == -1; }
	bool isFull (){ return top == MAX_STACK_SIZE - 1; } 

	void push(int x){
		if(isFull()){ error("Overflow"); }
		data[++top] = x;
	}

	int pop(){
		if(isEmpty()){ error("Underflow"); }
		return data[--top];
	}

	int peek(){
		if(isEmpty()){ error("Underflow"); }
		return data[top];
	}

	void display(){
		printf("[스택 항목의 수 = %2d ==> ", top+1);
		for(int i = 0; i <= top; ++i)
			printf("<%2d>", data[i]);
		printf("\n");
	}

};
			

