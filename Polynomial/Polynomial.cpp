#include "Polynomial.h"

int main()
{
	Polynomial a, b, c;
	a.read();
	b.read();
	c.add(a, b);
	a.display();
	b.display();
	c.display();

}
