#include <iostream>

class A {
	public:
	const int a;
	int b;
	int *p;

	public:
	void print() {
		std::cout << a << " " << b << std::endl;
	}
	A(int a): a(a) {
		//this-> a = a;
		p = new int[a];
	}
	~A() {
		delete[] p;
	}
	A(int a, int b) : A(a) {
		this-> b = b;
	}
	A(const A& B): A(B.a, B.b) {
		for (int i=0; i < a; i++) {
			p[i] = B.p[i];
		}
	}

	const A& operator =(const A& B) {
		if (this != &B) {
			for (int i = 0 ; i < B.a; i++) {
				this->p[i] = B.p[i];
			}

			
		}
		return *this;
	}	

};

int main() {
	A a(5,6);
	a.print();
	a.p[0] = 1;
	a.p[1] = 2;
	A b = a;
	A c(5,6);
	c = a;
	b.print();
	std::cout << c.p[0] << " " << c.p[1] << std::endl;
	return 0;
}
