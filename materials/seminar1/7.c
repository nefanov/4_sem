#include <iostream>

class A {
	public:
	       void	f() {std::cout << "A\n";};

};

class B: public A {
	public:
	void f() {std::cout << "B\n";}

};


int main() {
	B a;
	a.::A::f();
	return 0;
}
