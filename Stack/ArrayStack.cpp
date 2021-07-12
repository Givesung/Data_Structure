#include "ArrayStack.h"

int main()
{
	ArrayStack stack;

	for(int i = 0; i < 11; ++i){
		stack.push(i);
	}
	stack.display();
}
