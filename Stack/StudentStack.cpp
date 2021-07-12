#include "StudentStack.h"

int main()
{
	StudentStack stack;
	stack.push( Student(20172344, "홍길동", "컴퓨터공학과"));
	stack.display();

	return 0;
}
