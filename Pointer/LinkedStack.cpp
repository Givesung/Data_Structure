#include "LinkedStack.h"

int main()
{
	LinkedStack stack;
	stack.push(new Node(20000004, "홍길동", "컴공과"));
	stack.push(new Node(20000008, "길동", "컴공과"));
	stack.push(new Node(20000012, "동", "컴공과"));
	stack.display();

	Node *node = stack.pop();
	printf("[POP항목]\n");
	node->display();
	printf("\n");
	delete node;
	stack.display();
}

