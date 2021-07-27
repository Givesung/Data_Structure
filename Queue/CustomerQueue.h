#include<cstdio>
#include<cstdlib>

inline void error(char *message){
	printf("%s\n", message);
	exit(1);
}

Class CircularQueue{
	const int MAX_QUEUE_SIZE = 100;

	int front;
	int rear;
	int Customer[MAX_QUEUE_SIZE];

public:
	CircularQueue(){front = rear = 0;}
	bool isEmpty() {return front == rear;}
	bool isFull()  {return (rear+1)%MAX_QUEUE_SIZE == front;}

	void enqueue(int val){
		if(isFull())
			error(" error: 큐가 포화되었습니다\n");
		else{
			rear = (rear+1) % MAX_QUEUE_SIZE;
			Customer[rear] = val;
		}
	}
	int deqeueu(){
		if(isEmpty())
			error(" error: 큐가 공백상태입니다\n");
		else{
			front = (front+1) % MAX_QUEUE_SIZE;
			return Customer[front];
		}
	}
	int peek(){
		if(isEmpty())
			error(" error: 큐가 공백상태입니다\n");
		else
			return Customer[(front+1) % MAX_QUEUE_SIZE];
	}
	void display(){
		printf("큐 내용: ");
		int maxi = (front < rear) ? rear : rear+MAX_QUEUE_SIZE;
		for(int i = front+1; i < maxi; ++i)
			printf("[%2d] ", Customer[i%MAX_QUEUE_SIZE]);
		printf("\n");
	}
};
