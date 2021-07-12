#include "Student.h"

inline void error(const char* message){
	printf("%s", message);
	exit(1);
}

class StudentStack{
	static const int MAX_STACK_SIZE = 100;

	int top;
	Student data[MAX_STACK_SIZE];

public:
	StudentStack() { top = -1; }
	~StudentStack(){}
	bool isEmpty(){ return top == 0; }
        bool isFull (){ return top == MAX_STACK_SIZE - 1; }

	void push(Student x){
                if(isFull()){ error("Overflow"); }
                data[++top] = x;
        }

	Student pop(){
                if(isEmpty()){ error("Underflow"); }
                return data[--top];
        }

        Student peek(){
                if(isEmpty()){ error("Underflow"); }
                return data[top];
        }


       	void display(){
               printf("[전체 학생의 수 = %2d]\n", top+1);
                for(int i = 0; i <= top; ++i)
                       data[i].display();  
                printf("\n");
        } 
};
